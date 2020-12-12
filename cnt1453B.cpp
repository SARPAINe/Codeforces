#include<cstdio>
#include <sstream>
#include<cmath>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<list>
#include<set>
#include<utility>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include <iterator> //iterators
#include<stdio.h>
#include<limits.h>
#include<iomanip>


#define PI acos(-1)
#define INF 1e18
#define mod 1000000007
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)
#define fi(l,r) for(int i=l;i<r;i++)
#define fj(l,r) for(int j=l;j<r;j++)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

using namespace std;

typedef long long int lli;
typedef list<int> li;
typedef pair<int,int>pii;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        lli cnt=0,mx=INF,ptr=0,ans;
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=1;i<n-1;i++)
        {
            if(a[i+1]+ptr>a[i]+ptr)
            {
                cnt+=(a[i+1]+ptr-a[i]-ptr);
                ptr+=a[i]-a[i+1];
            }
            else
            {
                cnt+=(a[i]+ptr-a[i+1]-ptr);
                  ptr+=a[i]-a[i+1];
            }
        }
        if(cnt<mx)
        {
            mx=cnt;
            ans=mx;
        }
//        cout<<ans<<endl;
        cnt=0,ptr=0;
        int tmp=a[1];
        a[1]=a[0];
        for(int i=1;i<n-1;i++)
        {
            if(a[i+1]+ptr>a[i]+ptr)
            {
                cnt+=(a[i+1]+ptr-a[i]-ptr);
                ptr+=a[i]-a[i+1];
            }
            else
            {
                cnt+=(a[i]+ptr-a[i+1]-ptr);
                  ptr+=a[i]-a[i+1];
            }
        }
        a[1]=tmp;
        if(cnt<mx)
        {
            mx=cnt;
            ans=mx;
        }
        cnt=0,ptr=0;
//        cout<<ans<<endl;
        tmp=a[n-2];
        a[n-2]=a[n-1];
        for(int i=n-2;i>0;i--)
        {
            if(a[i-1]>a[i])
            {
                cnt+=(a[i-1]+ptr-a[i]-ptr);
                ptr+=a[i-1]-a[i];
            }
            else
            {
                cnt+=(a[i]+ptr-a[i-1]-ptr);
                ptr+=a[i-1]-a[i];
            }
        }
        a[n-2]=tmp;
        if(cnt<mx)
        {
            mx=cnt;
            ans=mx;
        }
        cnt=0,ptr=0;
//        cout<<ans<<endl;
        for(int i=n-2;i>0;i--)
        {
            if(a[i-1]>a[i])
            {
                cnt+=(a[i-1]+ptr-a[i]-ptr);
                ptr+=a[i-1]-a[i];
            }
            else
            {
                cnt+=(a[i]+ptr-a[i-1]-ptr);
                ptr+=a[i-1]-a[i];
            }
        }
        if(cnt<mx)
        {
            mx=cnt;
            ans=mx;
        }
        cout<<ans<<endl;

    }

    return 0;
}



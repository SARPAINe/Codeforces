#include<cstdio>
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
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)
#define fi(l,r) for(int i=l;i<r;i++)
#define fj(l,r) for(int j=l;j<r;j++)

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
        int n,mn=1000000009,ans=1;
        cin>>n;
        int a[n],sp[n];
        clr(sp);
        vector<int>srt;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
//        cout<<mn<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[i]%mn==0)
            {
               sp[i]=1;
                srt.push_back(a[i]);
            }
        }
        sort(srt.begin(),srt.end());
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%mn==0)
            {
                a[i]=srt[j];
                j++;
            }
        }
         for(int i=0;i<n-1;i++)
        {
            if(a[i]<=a[i+1]);
            else{
                ans=0;
                break;
            }
        }
        if(ans==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}










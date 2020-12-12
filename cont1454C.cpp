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
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0,id,unq=0,ans=1000000;
        cin>>n;
        int a[n],cnt[n+1];
        clr(cnt);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
            if(i!=0)
            {
                if(a[i]==a[i-1]);
//                else if(i==n-1 && cnt[a[i]]==0)
//                    cnt[a[i]]++;
//                else if(i==n-1 && cnt[a[i]]!=0);
                else cnt[a[i]]++;

            }
            else{
                cnt[a[i]]++;
            }

        }
        for(int i=1;i<=mx;i++)
        {
//            cout<<cnt[i]<<" ";
            if(cnt[i]>0)
                unq++;
        }
        for(int i=1;i<=mx;i++)
        {
            if(cnt[i]>0)
            {

                if(a[0]==i && a[n-1]==i && unq==1)
                {
                    ans=0;
                    break;
                }
                else if(a[0]==i && a[n-1]==i)
                {
                    ans=min(ans,cnt[i]-1);
                }
                else if(a[0]==i && a[n-1]!=i)
                {
                    ans=min(ans,cnt[i]);
                }
                else if(a[0]!=i && a[n-1]==i)
                {
                    ans=min(ans,cnt[i]);
                }

                else{
                    ans=min(ans,cnt[i]+1);
                }
            }
        }

        cout<<ans<<endl;

    }
    return 0;



}






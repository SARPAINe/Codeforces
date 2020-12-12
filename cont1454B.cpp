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
        int n,found=0,ans;
        cin>>n;
        int a[n],cnt[n+1];
        clr(cnt);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(cnt[i]==1)
            {
                found=1;
                ans=i;
                break;
            }
        }
        if(found==1)
        {
//            cout<<"ans:"<<ans<<endl;
            for(int i=0;i<n;i++)
            {
                if(a[i]==ans)
                {
                    ans=i+1;
                    break;
                }
            }
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;



}






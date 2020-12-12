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
//scanf("%d",&t);
    while(t--)
    {
        int n,k,mx=0,mn=10000000;
//        scanf("%d",&n);
//        scanf("%d",&k);
        cin>>n>>k;
        int a[n+1],cnt[n+1],prv[n+1];

        for(int i=0;i<=n;i++)
            {prv[i]=0;
            cnt[i]=0;}
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
             mx=max(mx,a[i]);
//            if(prv[a[i]]!=-1)
//            {
//                cout<<i<<" "<<"a[i]:"<<a[i]<<" "<<prv[a[i]]<<endl;
//                cout<<i-prv[a[i]]-1<<" "<<k<<endl;
                cnt[a[i]]+=(int)ceil((double)(i-prv[a[i]]-1)/(double)k);
//                cout<<cnt[a[i]]<<endl;
                prv[a[i]]=i;
//            }
//            else{
//                prv[a[i]]=i;

//            }
        }
        for(int i=1;i<=mx;i++)
        {
//            cout<<cnt[i]<<" ";

//                cout<<cnt[i]<<" "<<i<<" "<<a[n]<<" ";
                if(a[n]!=i)
                {
                    cnt[i]+=(int)ceil((double)(n-prv[i])/(double)k);
                }
                    mn=min(mn,cnt[i]);
//                cout<<cnt[i]<<endl;
        }

        cout<<mn<<endl;
    }

    return 0;

}

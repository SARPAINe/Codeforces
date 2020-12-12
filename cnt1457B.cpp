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
    scanf("%d",&t);
    while(t--)
    {
        int n,k,mx=0,mn=10000000;
        scanf("%d",&n);
        scanf("%d",&k);
        int a[n+1],cnt[101],prv[101];

        for(int i=0;i<=100;i++)
        {
            prv[i]=0;
            cnt[i]=-1;
        }
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
             mx=max(mx,a[i]);
             if(prv[a[i]]==0)
                cnt[a[i]]=0;

                cnt[a[i]]+=(int)ceil((double)(i-prv[a[i]]-1)/(double)k);
                prv[a[i]]=i;
            cout<<"i:"<<i<<" cnt[a[i]]:"<<cnt[a[i]]<<endl;
        }


        for(int i=1;i<=mx;i++)
        {
            if(cnt[i]!=-1)
            {

                if(a[n]!=i)
                {
                    cnt[i]+=(int)ceil((double)(n-prv[i])/(double)k);
                }
                    mn=min(mn,cnt[i]);
            }



        }

        printf("%d\n",mn);
    }

    return 0;


}






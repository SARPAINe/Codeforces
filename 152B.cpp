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


lli solve(lli n,lli x,lli key)
{
    if(key>0)return (n-x)/key;
    if(key<0)return (1-x)/key;
    return 1000000000000000007;
}

int main()
{
    lli n,m,xc,yc,k,a,b,ans=0,t,difa,difb;

    cin>>n>>m;
    cin>>xc>>yc;
    cin>>k;
    fi(0,k)
    {
        cin>>a>>b;

        difa=solve(n,xc,a);
        difb=solve(m,yc,b);
        t=min(difa,difb);
//        cout<<"t:"<<t<<endl;
        ans+=t;
        xc+=(t*a);
        yc+=(t*b);
//        cout<<xc<<" "<<yc<<endl;


    }
    cout<<ans<<endl;
    return 0;
}





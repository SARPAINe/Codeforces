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


lli nCr(lli n, lli r)
{
    lli res = 1;

    // Since C(n, k) = C(n, n-k)
    if (r > n - r)
        r = n - r;

    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < r; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main()
{
    lli n,m,t,ans=0,nn,r;
    cin>>n>>m>>t;
//    cout<<ans<<endl;
//    ans*=(n*(n-1)*(n-2)*(n-3))/24;
//    cout<<ans<<endl;
//    ans*=m;
//    cout<<ans<<endl;
//    nn=n+m-5;
//    r=t-5;
//    ans*=nCr(nn,r);
    fi(4,n+1)
    fj(1,m+1)
    {
        if(i+j==t)
        {
            ans+=nCr(n,i)*nCr(m,j);
        }
    }
    cout<<ans<<endl;


    return 0;
}






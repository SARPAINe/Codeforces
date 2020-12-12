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
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    lli n,ans=0,x=1;
    cin>>n;
    ans+=nCr(n,n/2);
//    cout<<ans<<endl;
    ans/=2;

    for(int i=1;i<=((n/2))-1;i++)
        x*=i;
    x*=x;
    ans*=x;
    cout<<ans<<endl;

}


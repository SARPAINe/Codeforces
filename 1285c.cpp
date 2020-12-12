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

lli lcm(lli a, lli b){
    return a / __gcd(a, b) * b;
}


int main()
{
    lli x,ans;
    cin>>x;
    for(lli i=1;i*i<=x;i++)
    {
        if(x%i==0 && lcm(i,x/i)==x)
        {
            ans=i;
        }
    }
    cout<<ans<<" "<<x/ans<<endl;
}












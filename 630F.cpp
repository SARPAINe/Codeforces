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


#define PI acos(-1)
#define INF 1e18
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)

using namespace std;

typedef long long int lli;
typedef list<int> li;
typedef pair<int,int>pii;

int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};

lli C[800][800];
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

///cntrl+shift+c=comment highlighted code
///cntrl+shift+c to comment out and x to reverse
int main()
{
   lli n;
   cin>>n;
    cout<<nCr(n,5)+nCr(n,6)+nCr(n,7);



}







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


int p;

int mul(int a, int b) {
    return (1LL * a * b) % p;
}

int main() {
    lli n,m=1000000000 + 7;
    scanf("%I64d",&n);
    lli res=1,res1=1;
    for(int i=0;i<3*n;i++)
    {
        res=(res*3)%m;
    }
    for(int i=0;i<n;i++)
    {
        res1=(res1*7)%m;
    }
    res=(res-res1+m)%m;
    printf("%I64d\n",res);
}


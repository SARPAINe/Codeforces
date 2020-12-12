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


    int n;
    cin>>n>>p;
    if (n>p) {cout<<0; return 0;}
    vector<int> a(n);
    for (int i = 0; i<n; i++) cin>>a[i];
    int res = 1;
    for (int i = 0; i<n; i++)
        for (int j = i+1; j<n; j++) res = mul(res, abs(a[i] - a[j])%p);
    cout<<res;
}




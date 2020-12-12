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


int main()
{
     int n, d, i, j;
  scanf("%d %d", &n, &d);
  int x[n];
  for (i=0;i<n;i++) scanf("%d", x+i);
  j = 0;
  long long ans = 0;
  for (i=0;i<n;i++) {
    while (x[i]-x[j] > d) j++;
    ans += (long long)(i-j)*(i-j-1)/2;
  }
  cout << ans << endl;

    return 0;
}




#include<cstdio>
#include <sstream>
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
    cin >> t;

    vector<int> dp(2e6);
    dp[1000] = 1;

    while (t--) {
        int x;
        cin >> x;

        int sm = 0;
        int i;
        for (i=1; i<1e4; i++) {
            sm += i;
            if (sm-1 == x) {
                i++;
                break;
            } else if (sm >= x) {
                break;
            }
        }
        cout << i << "\n";
    }
   return 0;
}






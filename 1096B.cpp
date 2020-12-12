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
    int n;
	string s;
	cin >> n >> s;
	int cntl = 0, cntr = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == s[0]) {
			++cntl;
		} else {
			break;
		}
	}
	for (int i = n - 1; i >= 0; --i) {
		if (s[i] == s[n - 1]) {
			++cntr;
		} else {
			break;
		}
	}
	if (s[0] == s[n - 1]) {
		cout << ((cntl + 1) * 1ll * (cntr + 1)) % 998244353 << endl;
	} else {
		cout << (cntl + cntr + 1) % 998244353;
	}

    return 0;



}






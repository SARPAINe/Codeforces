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
li l[300005];
lli c[300005];
int visited[300005],cnt;
void dfs(int src)
{
    visited[src]=1;
    for (auto it = l[src].begin(); it!=l[src].end(); ++it)
       {
            if (!visited[*it])
            {
                dfs(*it);
            }
            else
            cnt++;

       }
}


///cntrl+shift+c=comment highlighted code
///cntrl+shift+c to comment out and x to reverse
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		string s; cin >> s;

		bool hasCW = false;
		bool hasCCW = false;
		for(int i = 0;i < n;i++){
			if(s[i] == '<') hasCW = true;
			if(s[i] == '>') hasCCW = true;
		}

		if(hasCW && hasCCW){
			int ans = 0;
			s += s[0];
			for(int i = 0;i < n;i++){
				if(s[i] == '-' || s[i+1] == '-') ans++;
			}
			cout << ans << "\n";
		}
		else{
			cout << n << "\n";
		}
	}

}


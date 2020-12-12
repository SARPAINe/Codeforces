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
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        vector<pair<lli,lli>>val;
        for (long long i = 2; i * i <= n; ++i) {
			int cnt = 0;
			while (n % i == 0) {
				++cnt;
				n /= i;
			}
			if (cnt > 0) {
				val.push_back({cnt, i});
			}
		}
		if (n > 1) {
			val.push_back({1, n});
		}
		sort(val.rbegin(),val.rend());
		vector<lli> ans(val[0].first, val[0].second);
		for (int i = 1; i < val.size(); ++i) {
			for (int j = 0; j < val[i].first; ++j) {
				ans.back() *= val[i].second;
			}
		}
		cout<<ans.size()<<endl;
		for(auto x:ans)
            cout<<x<<" ";
        cout<<endl;

    }
    return 0;
}

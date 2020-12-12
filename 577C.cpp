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


bool is_prime(int a){
	for(int i = 2; i <= sqrt(a); i++){
		if(a%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	vector<int> ans;
	for(int i = 2; i <= n; i++){
		if(is_prime(i)){
			int q = i;
			while(q <= n){
				ans.push_back(q);
				q *= i;
			}
		}
	}
	cout << ans.size() << endl;
	for(int i = 0;  i < ans.size(); i++) cout << ans[i] << " ";
}

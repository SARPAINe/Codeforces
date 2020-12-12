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


int r,g,b,f;
int main(){
	cin>>r>>g>>b;
	f=min(min(r,g),b);
	r-=f;
	g-=f;
	b-=f;
	if(r%3+g%3+b%3==4 && f!=0)
        f++;
	cout<<f+r/3+g/3+b/3<<endl;
}


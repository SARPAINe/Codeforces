
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
int c,d,i,n,m,k,x,j=1000000007;
string s;
int main(){
	cin>>s;
	for(i=s.size()-1;i>=0;i--){
		if(s[i]=='b')c++;else{
			k+=c;c*=2;k%=j;c%=j;

		}
	}
	cout<<k;
}

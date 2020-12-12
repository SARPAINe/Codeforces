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



int main()
{

    long long t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			int a;
			cin>>a;
			if(a!=i&&flag==0)
			flag=1;
			if(a==i&&flag==1)
			flag=2;
			if(a!=i&&flag==2)
			flag=3;
		}
		if(flag==0)cout<<0<<endl;
		if(flag==1||flag==2)cout<<1<<endl;
		if(flag==3)cout<<2<<endl;
	}


}






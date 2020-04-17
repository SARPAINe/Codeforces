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

int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};
double distance(int a,int b)
{
    double c,d,dis;
   c=pow((double)a,2);
   d=pow((double)b,2);
   dis=sqrt(c+d);
   return dis;
}
bool cmp(int a,int b)
{
    return a>b;
}
string ssort(string a)
{
    sort(a.begin(),a.end());
    return a;
}
int n;
int a[100005];
int ps[100005];
int r[100005];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ps[a[i]]=i;
	}
	for(int i=n;i>0;i--){
		int x = ps[i];
		r[x]=0;
		//cout<<x<<endl;
		for(int j = x+i;j<=n;j+=i)
			if(r[j]==0&& a[j]>i)
				r[x]=1;
		for(int j= x-i;j>0;j-=i)
			if(r[j]==0&& a[j]>i)
				r[x]=1;
        //for(int i=1;i<=n;i++)
           // cout<<r[i]<<" ";
        //cout<<endl;
	}
	for(int i=1;i<=n;i++)
		cout<<(r[i]==1?'A':'B');
	return 0;
}


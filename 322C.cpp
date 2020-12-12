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
    int a,b,sz;
    cin>>a>>b;
    string s;
    cin>>s;
    sz=s.size();
    int loc[sz+1][2];
    loc[0][0]=0;
    loc[0][1]=0;
    for(int i=0; i<sz; i++)
    {
        if(s[i]=='U')
        {
            loc[i+1][0]=loc[i][0];
            loc[i+1][1]=loc[i][1]+1;
        }
        else if(s[i]=='D')
        {
            loc[i+1][0]=loc[i][0];
            loc[i+1][1]=loc[i][1]-1;
        }
        else if(s[i]=='L')
        {
            loc[i+1][0]=loc[i][0]-1;
            loc[i+1][1]=loc[i][1];
        }
        else
        {
            loc[i+1][0]=loc[i][0]+1;
            loc[i+1][1]=loc[i][1];
        }

    }

    for(int i = 0;i<=s.size();i++)
	{
		int p = a - loc[i][0];
		int q = b - loc[i][1];

		int k = 1;
		if(loc[sz][0] != 0) k = p/loc[sz][0];
		if(loc[sz][1] != 0) k = q/loc[sz][1];


		if(k >= 0 && p == k*loc[sz][0] && q == k*loc[sz][1]) return cout << "Yes\n",0;
    }
    cout << "No\n";
}



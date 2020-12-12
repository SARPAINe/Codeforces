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
    lli n,m,ans=1;
    cin>>n>>m;
    set<char>cnt;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cnt.insert(s[j][i]);
        }

        ans=(ans*cnt.size())%1000000007;
        cnt.clear();
    }
    cout<<ans<<endl;

}






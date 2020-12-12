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


///cntrl+shift+c=comment highlighted code
///cntrl+shift+c to comment out and x to reverse
int main()
{

    int tc;
    cin>>tc;
   string ss;
    for(int t=1;t<=tc;t++)
    {
       int n,m,k=0,sz;
       cin>>n>>m;
       sz=n*m;
       lli a[sz],ans=0;
       for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
       {
           cin>>a[k];
           k++;
       }
       sort(a,a+sz);
       int md=((a[sz-1]-a[0])/2)+a[0];
       for(int x:a){
        ans+=abs(x-md);
       }
       cout<<ans<<endl;
    }

}






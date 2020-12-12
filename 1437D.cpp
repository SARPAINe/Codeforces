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
#define                           f(i,l,r)                    for(int i=l;i<=r;i++)

using namespace std;

const long long inf=1e18;
const int mod=1e9+7;
const int M=200005;
int a[M];
void solve()
{
    int n;
    cin>>n;
    f(i,1,n)cin>>a[i];
    int lvl=1,c=1,cur=2;
    while(1)
    {
         int nw_c=0;
         while(c--)
         {
             int nxt=cur;
             for(int j=cur+1;j<=n;j++)
             {
                 if(a[j]>a[j-1])
                 {
                     nxt=j;
                     nw_c++;
                 }
                 else break;
             }
             cur=nxt+1;
             nw_c++;
             if(cur>n)break;
         }

         if(cur>n)break;
         c=nw_c;
         lvl++;
    }
    cout<<lvl<<"\n";
}
 main()

{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;

}

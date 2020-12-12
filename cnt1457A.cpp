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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r,c,t1,t2,t3,t4;
        cin>>n>>m>>r>>c;
        t1=abs(n-r)+abs(m-c);
        t2=abs(r-1)+abs(c-1);
        t3=abs(r-1)+abs(c-m);
        t4=abs(r-n)+abs(c-1);
        cout<<max(max(t1,t2),max(t3,t4))<<endl;
    }

    return 0;

}





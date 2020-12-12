#include<cstdio>
#include <sstream>
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
    int n,m,ans=0,id;
    cin>>n>>m;
    lli x[n],p[n],gc;
    cin>>x[0];
    cin>>x[1];
    gc=x[1]-x[0];
    for(int i=2;i<n;i++)
    {
        cin>>x[i];
        gc=__gcd((x[i]-x[i-1]),gc);
    }
    for(int i=0;i<m;i++)
    {
        cin>>p[i];

    }
    for(int i=0;i<m;i++)
    {
        if(gc%p[i]==0)
        {
            ans=1;
            id=i+1;
            break;
        }
    }
    if(ans==0)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<x[0]<<" "<<id<<endl;
    }


}

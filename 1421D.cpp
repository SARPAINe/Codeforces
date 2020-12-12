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
int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int tc;
    cin>>tc;
    for(int t=1; t<=tc; t++)
    {
        lli x,y,c1,c2,c3,c4,c5,c6,ans=0;
        cin>>y>>x;
        cin>>c1>>c2>>c3>>c4>>c5>>c6;
        if(x>0 && y>0)
        {
            if(x>=y)
                ans+=min((c2*x+c6*y),(c2*(x-y)+c1*y));
            else
                ans+=min((c2*x+c6*y),(c6*(y-x)+c1*x));
            cout<<ans<<endl;
        }
        else if(x<0 && y<0)
        {
            if(x<=y)
            ans+=min((c5*x*-1+c3*y*-1),(c5*(y-x)+(-1*c4*y)));
            else
             ans+=min((c5*x*-1+c3*y*-1),(c3*(x-y)+(-1*c4*x)));
            cout<<ans<<endl;
        }
        else if(y==0)
        {
            if(x>=0)
            {
                ans+=(x*c2);
            }
            else
            {
                ans+=(-1*x*c5);
            }
            cout<<ans<<endl;
        }
        else if(x==0)
        {
            if(y>=0)
            {
                ans+=(y*c6);
            }
            else
            {
                ans+=(-1*y*c3);
            }
            cout<<ans<<endl;
        }
        else if(x>0&&y<0)
        {
            ans+=min( (c2*x)+(-1*y*c3),(-1*y*c4)+((x+(-1*y))*c2));
            cout<<ans<<endl;

        }
        else if(x<0&&y>0)
        {
            ans+=min((c6*y)+(-1*x*c5),((-1*x)+y)*c5+(c1*y));
            cout<<ans<<endl;
        }
    }
    return 0;
    //unsolved


}




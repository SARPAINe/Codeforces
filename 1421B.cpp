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
        int n;
        cin>>n;
        string grid[n];
        for(int i=0; i<n; i++)
            cin>>grid[i];
        if(grid[0][1]==grid[1][0])
        {
            if(grid[0][1]=='0')
            {
                if(grid[n-1][n-2]==grid[n-2][n-1])
                {
                    if(grid[n-1][n-2]=='1')
                        cout<<0<<endl;
                    else
                    {
                        cout<<2<<endl;
                        cout<<n<<" "<<n-1<<endl;
                        cout<<n-1<<" "<<n<<endl;
                    }
                }
                else
                {
                    if(grid[n-1][n-2]=='0')
                    {
                        cout<<1<<endl;
                        cout<<n<<" "<<n-1<<endl;
                    }
                    else
                    {
                        cout<<1<<endl;
                        cout<<n-1<<" "<<n<<endl;
                    }
                }
            }


            else
            {
                if(grid[n-1][n-2]==grid[n-2][n-1])
                {
                    if(grid[n-1][n-2]=='0')
                        cout<<0<<endl;
                    else
                    {
                        cout<<2<<endl;
                        cout<<n<<" "<<n-1<<endl;
                        cout<<n-1<<" "<<n<<endl;
                    }
                }
                else
                {
                    if(grid[n-1][n-2]=='1')
                    {
                        cout<<1<<endl;
                        cout<<n<<" "<<n-1<<endl;
                    }
                    else
                    {
                        cout<<1<<endl;
                        cout<<n-1<<" "<<n<<endl;
                    }
                }
            }
        }


        else
        {
            if(grid[n-1][n-2]==grid[n-2][n-1])
            {
                if(grid[n-1][n-2]=='0')
                {
                    cout<<1<<endl;
                    if(grid[0][1]=='0')
                        cout<<1<<" "<<2<<endl;
                    else
                        cout<<2<<" "<<1<<endl;
                }
                else if(grid[n-1][n-2]=='1')
                {
                    cout<<1<<endl;
                    if(grid[0][1]=='1')
                        cout<<1<<" "<<2<<endl;
                    else
                        cout<<2<<" "<<1<<endl;
                }


            }
            else
            {
                cout<<2<<endl;
                if(grid[0][1]=='1')
                    cout<<1<<" "<<2<<endl;
                else
                    cout<<2<<" "<<1<<endl;
                if(grid[n-1][n-2]=='0')
                    cout<<n<<" "<<n-1<<endl;
                else
                    cout<<n-1<<" "<<n<<endl;

            }
        }
    }
    return 0;

}



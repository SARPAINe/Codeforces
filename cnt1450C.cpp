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
#define mod 1000000007
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)
#define fi(l,r) for(int i=l;i<r;i++)
#define fj(l,r) for(int j=l;j<r;j++)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

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
        int n;
        cin>>n;
        char grid[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>grid[i][j];
            }
        }


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(
                    (i-0>=1&& n-i-1>=1 && j-0>=1 && n-j-1>=1&&grid[i][j]=='X'&&grid[i-1][j]=='X'&&grid[i+1][j]=='X'&&
                     grid[i][j-1]=='X'&&grid[i][j+1]=='X')||
                   (i-0>=1&& n-i-1>=1 &&n-j-1>=2&& grid[i][j]=='X'&&grid[i-1][j]=='X'&&grid[i+1][j]=='X'&&grid[i][j+1]=='X'&&grid[i][j+2]=='X')||
                    (i-0>=2&&grid[i][j]=='X'&&grid[i-1][j]=='X'&&grid[i-2][j]=='X') ||
                    (j-0>=2&&grid[i][j]=='X'&&grid[i][j-1]=='X'&&grid[i][j-2]=='X')
                   )
                    grid[i][j]='O';
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}



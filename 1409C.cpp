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
        int n,x,y,mx=1000000009,hi,anss,ansdif;
        cin>>n>>x>>y;
        for(int i=1; i<=y-x; i++)
        {
            for(int s=1; s<=x; s++)
            {
                if(x!=s)
                {
                    if((x-s)%i==0 && (x-s)/i<n &&
                            (y-s)%i==0 && (y-s)/i<n )
                    {
                        if(mx>s+(i*(n-1)))
                        {
                            mx=s+(i*(n-1));
                            anss=s;
                            ansdif=i;
                        }
                    }


                }
                else
                {
                    if((y-s)%i==0 && (y-s)/i<n )
                    {
                        if(mx>s+(i*(n-1)))
                        {
                            mx=s+(i*(n-1));
                            anss=s;
                            ansdif=i;
                        }
                    }

                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<anss+(ansdif*i)<<" ";
        }
        cout<<endl;

    }


}







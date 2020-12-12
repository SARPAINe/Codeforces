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
    for(int t=0;t<tc;t++)
    {
       int n;
       cin>>n;
       int a[n-1],b[n-1];

       for(int i=0;i<n-1;i++)
       {
           a[i]=i+1;
           b[i]=i+3;
       }

       swap(a[n-2],a[n-3]);
       b[n-3]=b[n-4];
       b[n-2]-=1;
       cout<<2<<endl;
        if(n>3)
        {
            for(int i=n-2;i>=0;i--)
            {
                cout<<a[i]<<" "<<b[i]<<endl;
            }

        }
        else if(n==2)
        {
            cout<<1<<" "<<2<<endl;
        }
        else if(n==3)
        {
            cout<<2<<" "<<3<<endl;
            cout<<1<<" "<<3<<endl;
        }


    }
	return 0;

}

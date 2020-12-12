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
        int n,f,mn=1000000009;
        cin>>n;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(n-i<mn)
                {
                    f=i;
                    mn=n-i;
//                    cout<<f<<" "<<mn<<endl;
                }
//                cout<<endl;
                if((n-(n/i))<mn && i!=1)
                {
                    f=n/i;
                    mn=n-(n/i);
//                    cout<<f<<" "<<mn<<endl;
                }
            }
        }
        cout<<f<<" "<<mn<<endl;
    }


}





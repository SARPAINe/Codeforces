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
//    cout<<t<<endl;
    while(t--)
    {
        int n,m,x,cnt=0;
        cin>>n>>m;
        int train[101];
        clr(train);
        for(int i=0;i<n;i++)
        {
            cin>>x;
            train[x]++;
        }
        for(int i=0;i<m;i++)
        {
            cin>>x;
            train[x]++;
        }
        for(int i=1;i<=100;i++)
        {
            if(train[i]>0)
                cnt++;
        }
        cout<<n+m-cnt<<endl;
//        cout<<t<<endl;

    }

}

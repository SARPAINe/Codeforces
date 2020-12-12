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
    int n,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        char s[n];
        for(int i=0; i<n; i++)
        {
            if(i%3==0)
                s[i]='a';
            else if(i%3==1)
                s[i]='b';
            else
                s[i]='c';
        }
        for(int i=0; i<n; i++)
        {
            cout<<s[i];
        }
        cout<<endl;

    }
   return 0;

}

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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1||n==2||n==4)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n%3==0) cout<<n/3<<" "<<0<<" "<<0<<endl;
        else if(n%3==1) cout<<(n-7)/3<<" "<<0<<" "<<1<<endl;
        else cout<<(n-5)/3<<" "<<1<<" "<<0<<endl;
    }
    return 0;

}

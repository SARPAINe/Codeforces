
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
    int tc , t=1 ;

    scanf("%d",&tc) ;
    char s[2000005];
    while( t++ <= tc )
    {
        scanf("%s",s) ;
        int n = strlen(s) ;
        int b = 0, ans = 0 ;

        for(int i=n-1 ; i>=0 ; i--)
        {
            if(s[i]=='B') b++ ;
            if(s[i]=='A')
            {
                if(b>0) b-- ;
                else ans++ ;
            }
        }
        ans += (b%2) ;
        printf("%d\n",ans) ;
    }

    return 0 ;

}


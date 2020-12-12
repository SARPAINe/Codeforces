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

using namespace std;

typedef long long int lli;
typedef list<int> li;
typedef pair<int,int>pii;

int y[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]= {31,29,31,30,31,30,31,31,30,31,30,31};

///cntrl+shift+c=comment highlighted code
///cntrl+shift+c to comment out and x to reverse
int main()
{
    char s[10];
    lli i, j, k, l, n, ret ;

    scanf("%s",&s) ;

    n = ((s[0]-'0')*10000+ (s[2]-'0')*1000 + (s[4]-'0')*100 + (s[3]-'0')*10 + s[1] - '0' ) ;
    for(i=1,ret=1 ; i<=5 ; i++)
    {
        ret = (ret*n)%100000 ;
    }

    i= 5;
    while(i>=1 )
    {
        s[i-1] = ret%10 + '0' ;
        ret = ret/10 ;
        i-- ;
    }
    printf("%s\n",s) ;

    return 0;

}











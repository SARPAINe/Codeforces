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

int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};

///cntrl+shift+c=comment highlighted code
///cntrl+shift+c to comment out and x to reverse
int main()
{
   double a,b,c,d,an1,an2;
   cin>>a>>b>>c;
   d=sqrt((b*b)-(4*a*c));
   an1=(-b+d)/(2*a);
   an2=(-b-d)/(2*a);
   if(an1>an2)
   {
       cout<<setprecision(15)<<an1<<endl;
   cout<<setprecision(15)<<an2<<endl;
   }
   else{
    cout<<setprecision(15)<<an2<<endl;
   cout<<setprecision(15)<<an1<<endl;
   }

//   cout<<setprecision(15)<<(-b+d)/(2*a)<<endl;
//   cout<<setprecision(15)<<(-b-d)/(2*a)<<endl;

    return 0;

}











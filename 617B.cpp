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
    lli n,ck=1,ans=1,found=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1&&found==0)
        {
            found=1;
        }
        else if(found>0)
        {

            if(a[i-1]==1&&a[i]==0)
            {
                ck++;
//                cout<<"ck:"<<ck<<endl;
            }

            else if(a[i-1]==0&&a[i]==0)
            {
                ck++;
            }

            else
            {
                ans*=ck;
                ck=1;
            }
        }
    }
    if(found==1)
    cout<<ans<<endl;
    else
        cout<<0<<endl;
}













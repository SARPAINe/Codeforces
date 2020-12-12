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



int main()
{
    int n,ans=0,s=1;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        b[i]=a[i];
    for(int i=0;i<n;i++)
    {
        if(s>n)
            break;
        for(int j=s;j<n;j++)
        {
            if(b[j]>a[i])
                {ans++;
                s=j+1;
                break;
                }
            else
                s=j+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}



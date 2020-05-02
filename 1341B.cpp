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





int main()
{
    int t;
    cin>>t;
    for(int tc=0;tc<t;tc++)
    {
        int n,k,a1,a2;
        cin>>n>>k;
        int a[n],peak[n],mx,pk=0;
        clr(peak);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=1;i<k-1;i++)
            if(a[i]>a[i-1]&&a[i]>a[i+1])
                peak[i]=1,pk++;
        mx=pk;
        a1=mx+1;
        a2=1;
        for(int i=0;i<n-k;i++)
        {
            if(peak[i+1])
                pk--;
            if(a[i+k-1]>a[i+k]&&a[i+k-1]>a[i+k-2])
                peak[i+k-1]=1,pk++;
            if(pk>mx)
            {
                mx=pk;
                a1=mx+1;
                a2=i+2;
            }

        }
        cout<<a1<<" "<<a2<<endl;

    }

	return 0;

}





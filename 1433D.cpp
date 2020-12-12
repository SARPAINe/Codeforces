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
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,dif=0,found=0;
        cin>>n;
        int a[n],visited[n+1];
        clr(visited);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i-1]==a[i]);
                else{
                    dif=1;
                }
            }
        }
        if(dif==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[0])
            {
                cout<<1<<" "<<i+1<<endl;
                visited[1]=1;
                visited[i+1]=1;
                if(found==0)
                    found=i;
            }
        }


        for(int i=1;i<=n;i++)
        {
            if(visited[i]==0)
                cout<<found+1<<" "<<i<<endl;
        }

    }

}


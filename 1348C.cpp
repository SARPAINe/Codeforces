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
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if (s[0]!=s[k-1])
        {
            cout<<s[k-1]<<endl;
            continue;
        }
        cout<<s[0];
        if (s[k]!=s[n-1])
        {
            for (int i=k; i<n; i++)
                cout<<s[i];
        }
        else
        {

            for (int i=0; i<(n-1)/k; i++)
                cout<<s[k];
        }
        cout<<endl;
    }
    return 0;
}


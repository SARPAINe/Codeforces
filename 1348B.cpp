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
        int N,K;
        cin>>N>>K;
        set<int>s;
        for (int i=0; i<N; i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        if (s.size()>K)
        {
            cout<<-1<<endl;
            continue;

        }
        cout<<N*K<<endl;
        for (int i=0; i<N; i++)
        {
            for (int i:s)
                cout<<i<<' ';
            //print the extra 1s
            for (int j=0; j<K-(int)s.size(); j++)
                cout<<1<<' ';
        }
        cout<<endl;
    }
    return 0;
}

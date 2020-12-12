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
#define fi(l,r) for(int i=l;i<r;i++)
#define fj(l,r) for(int j=l;j<r;j++)

using namespace std;

typedef long long int lli;
typedef list<int> li;
typedef pair<int,int>pii;


int main()
{
    int q, x;
    cin >> q >> x;
    vector<int> vec(x, 0);
    int ans = 0;
    for (int i = 0; i < q; ++i)
    {
        int p;
        cin >> p;
        p%=x;
        vec[p]++;
        if(ans == p) ans++;
        while(vec[ans%x]>ans/x)
        {
            ans++;
        }
        cout << ans << endl;
    }
}

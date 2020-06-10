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
int mod(int a, int b)
{
    int r = a % b;
    return r < 0 ? r + b : r;
}

int main()
{
    int t;
    cin>>t;
    string ans;
    while(t--)
    {
        int n,from,to;
        ans="YES";
        cin>>n;
        int a[n],cnt[n];
        clr(cnt);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            from=i;
            to=i+a[i];
            cnt[mod(to,n)]++;
            if(cnt[mod(to,n)]>1)
            {
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
	return 0;

}





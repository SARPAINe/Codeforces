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


///cntrl+shift+c=comment highlighted code
///cntrl+shift+c to comment out and x to reverse
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        lli n,k,ans;
        cin>>n>>k;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        reverse(a,a+n);
        ans=a[0];
        for(int j=0;j<k;j++)
        {
           // cout<<ans<<endl;
            ans+=a[j+1];
        }
        cout<<ans<<endl;
    }

	return 0;

}

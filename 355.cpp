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
    int n,met=1,ans=0,l;
    cin>>n;
    int lst[n];
    l=n;
    int start=0,i;
    while(n-met>0){
        n-=met;
        ans++;
        for(i=start;i<start+met;i++)
        {
            lst[i]=ans;
//            cout<<lst[i]<<endl;
        }
        start=i;
        met*=2;

    }
    ans+=1;

    for(i=start;i<start+n;i++)
    {
        lst[i]=ans;
//        cout<<lst[i]<<endl;
    }

    cout<<ans<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<lst[i]<<" ";
    }
	return 0;

}





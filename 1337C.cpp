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
#define PI acos(-1)
#define INF INT_MAX
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)
#include<stdio.h>
using namespace std;
typedef long long int lli;
typedef list<int> li;
vector<int>l[200005];
int depth[200005],cnt[200005],sub[200005];
int visited[200005];
lli n,m,x,y,p_src=0,ans=0,k;
vector<int>sq;
void dfs(int src,int e)
{
    visited[src]=1;
    cnt[src]=1;
    depth[src]=depth[e]+1;
    //sq.push_back(src);
    for (auto it = l[src].begin(); it!=l[src].end(); ++it)
       {
           if(*it==e)
           continue;
            if (!visited[*it])
            {
                dfs(*it,src);
            }
            cnt[src]+=cnt[*it];

       }
       sub[src]=cnt[src]-depth[src];
}


int main()
{
    cin>>n>>k;
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        //if(x<y)
        l[x].push_back(y);
        //else
        l[y].push_back(x);
    }
    clr(visited);
    //clr(cnt);

    depth[0]=0;
    dfs(1,0);


    //for(int i=1;i<=n;i++)
      //  sub[i]=cnt[i]-depth[i];

    sort(sub+1,sub+n+1);
    reverse(sub+1,sub+n+1);

    for (int i=1;i<=n-k;++i)ans+=sub[i];
    cout<<ans<<endl;
    return 0;
}



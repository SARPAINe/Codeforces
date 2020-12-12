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
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)
#define INF 1000000000000001
#include<stdio.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
using namespace std;
vector<pii >v[100005];
///vector<pii>path[1000];
priority_queue<pii>pq;
ll parent[100005];
ll level[100005],ans[100005],n;
void dijkstra(int src)
{
     pq.push(make_pair(0,src));
   // visited[0]=1;
    level[src]=0;
    ///path[src].push_back(1);

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
//        if(u==n)
//            break;
        for (auto i = v[u].begin(); i != v[u].end(); ++i)
        {
            int q = (*i).first;
            int weight = (*i).second;

            //  If there is shorted path to v through u.
            if (level[q] > level[u] + weight)
            {
                // Updating distance of v
                level[q] = level[u] + weight;
                pq.push(make_pair((-1*level[q]), q));
                parent[q]=u;
            }
        }

    }

}


int main()
{

    ll x,y,w,e;
    cin>>n>>e;
    for(int i=1;i<=n;i++)
        level[i]=INF;
    while(e--)
    {
        scanf("%d%d%d",&x,&y,&w);
        v[x].push_back(make_pair(y, w));
        v[y].push_back(make_pair(x, w));
    }
    dijkstra(1);
    //for(int i=1;i<=n;i++)
      //  cout<<i<<" "<<level[i]<<endl;
    parent[1]=0;
    int ck=0;
    ans[0]=n;
    if(level[n]==INF)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    while(parent[n]!=0)
    {
        ck++;
        ans[ck]=parent[n];
        n=parent[n];
    }
    for(int i=ck;i>=0;i--)
        cout<<ans[i]<<" ";

    return 0;
}

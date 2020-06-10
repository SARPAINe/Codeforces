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
vector<int>l;


int main()
{
    int tc,n;
    scanf("%d",&tc);
    int st=2,indx=0,prv=0;
    while(st+prv<=1000000000)
    {
        l.push_back(st+prv);
        st+=3;
        prv=l[indx];
        indx++;
    }

    int sz=l.size()-1;
    while(tc--)
    {
        int ans=0,tmp=0,cnt=0;
        scanf("%d",&n) ;
        while(n>=2)
        {
            cnt+=1;
            int lo=0,hi=min(sz,n),m;
            m=(lo+hi)/2;
            int cn=0;
            while(lo<=hi)
            {
                if(n<l[m])
                {
                    hi=m-1;
                    m=(lo+hi)/2;
                }
                else
                {
                    lo=m+1;
                    m=(lo+hi)/2;
                }
            }

            tmp=m;

            n=n-l[tmp];
            ans+=1;
        }
        cout<<ans<<endl;
    }
    return 0;

}

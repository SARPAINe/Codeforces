#include<cstdio>
#include <sstream>
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
#define mod 1000000007
#define clr(a) memset(a,0,sizeof a)
#define fil(a) memset(a,1,sizeof a)
#define fi(l,r) for(int i=l;i<r;i++)
#define fj(l,r) for(int j=l;j<r;j++)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

using namespace std;

typedef long long int lli;
typedef list<int> li;
typedef pair<int,int>pii;

struct coord{
    double x,y,quality;
};

bool cmp(coord arr1,coord arr2)
{
    return arr1.quality<arr2.quality;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=-1;
        cin>>n>>k;
//        struct coord co[n];
//        for(int i=0;i<n;i++)
//        {
//            cin>>co[i].x;
//            cin>>co[i].y;
//            co[i].quality=co[i].x+co[i].y;
//        }
//        sort(co,co+n,cmp);
//        for(int i=1;i<n;i++)
//        {
//            if(co[i].quality-co[i-1].quality<=k);
//            else{
//                ans=-1;
//                break;
//            }
//
//        }
        int x[n];
        int y[n];
        int mn=10000000,mx=-3;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            cin>>y[i];
            mx=max(mx,x[i]+y[i]);
            mn=min(mn,x[i]+y[i]);
        }
//        cout<<mn<<" "<<mx<<endl;
        for(int i=0;i<n;i++)
        {
//            cout<<x[i]+y[i]<<endl;
//            cout<<x[i]+y[i]-mn<<endl;
//            cout<<mx-x[i]+y[i]<<endl;
            if((x[i]+y[i]-mn)<=k && (mx-x[i]-y[i])<=k)
            {

                ans=1;
                break;
            }

        }
        cout<<ans<<endl;

    }
    return 0;
}



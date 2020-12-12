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

    int n,ans,ii=0;
    cin>>n;
    ans = n+1;
    string s,a[7];
    cin>>s;

    while(a[0].size()<n) a[0]+= "RGB";
    while(a[1].size()<n) a[1]+= "RBG";

    while(a[2].size()<n) a[2]+= "GRB";
    while(a[3].size()<n) a[3]+= "GBR";

    while(a[4].size()<n) a[4]+= "BGR";
    while(a[5].size()<n) a[5]+= "BRG";

    for(int x=0; x<6; x++)
    {
        int tot = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=a[x][i]) tot++;
        }

        if(tot<ans)
        {
            ans = tot;
            ii = x;
        }
    }

    cout<<ans<<endl;
    for(int i=0; i<n; i++) cout<<a[ii][i];
    cout<<endl;




}








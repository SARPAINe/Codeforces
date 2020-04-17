//#include<bits/stdc++.h>

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

int y[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]= {31,29,31,30,31,30,31,31,30,31,30,31};
double distance(int a,int b)
{
    double c,d,dis;
    c=pow((double)a,2);
    d=pow((double)b,2);
    dis=sqrt(c+d);
    return dis;
}

string ssort(string a)
{
    sort(a.begin(),a.end());
    return a;
}


int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,i,j,mx=0,st,ans=0;
        cin>>n;
        int a[n],b[n];
        lli cst=1000000000005;
        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
            if(i!=0)
            {
               // cout<<a[i]-b[i-1]<<endl;
                if(a[i]-b[i-1]>mx)
                {
                    mx=a[i]-b[i-1];
                    if(i==1)
                        st=n-1;
                    else
                        st=i-2;
                }
            }

        }
        //cout<<st<<endl;
        if(a[0]-b[n-1]>mx)
        {
            mx=a[0]-b[n-1];
            st=n-2;
        }
        cout<<st<<endl;
       for(i=st;i<st+n;i++)
       {
           j=i%n;
           ans+=min((lli)a[j],cst);
           cst=max(0,a[(j+1)%n]-b[j]);
           //cout<<ans<<" "<<cst<<endl;
       }
       cout<<ans<<endl;
    }
    return 0;

}





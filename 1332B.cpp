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

int y[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};
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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int gc[1001][1001];
int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

    clr(gc);
    for(int i=1;i<=999;i++)
    {
        for(int j=2;j<=1000;j++)
        {
            gc[i][j]=gcd(i,j);
        }
    }
    int t;
    cin>>t;

    while (t--){
             map<int,int>mp;
        int n,ck=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
           // st.insert(a[i]);
        }
        //for(auto it=st.begin();it!=st.end();it++)
            //cout<<*it<<" "<<endl;
       // clr(gcd);

        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]==0)
                mp[a[i]]=ck;
            for(int j=1;j<n;j++)
            {
                cout<<gc[a[i]][a[j]]<<" ";
                if(gc[a[i]][a[j]]>1)
                {
                    mp[a[j]]=ck;
                    cout<<mp[a[j]]<<endl;
                }
            }
            cout<<endl;
            ck++;
        }

         for(int i=0;i<n;i++)
            cout<<mp[a[i]]<<" ";
         cout<<endl;

    }



}




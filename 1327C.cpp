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
int cal_height(lli time,int height)
{
   int x=time/height;
   int y=time%height;
   if(x%2==0)
    return y;
   else return height-y;
}
 map<int,int>cnt;
 int x;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
   int n,m,k,x,y;
   cin>>n>>m>>k;
   for(int i=0;i<k;i++)
    cin>>x>>y;
   for(int i=0;i<k;i++)
    cin>>x>>y;
    cout<<n+m+(n*m)-3<<endl;
    for(int i=0;i<n-1;i++)
        cout<<"U";
    for(int i=0;i<m-1;i++)
        cout<<"L";
    for(int i=0;i<m-1;i++)
        cout<<"R";

    for(int i=0;i<n-1;i++)
    {
            cout<<"D";
        for(int j=0;j<m-1;j++)
        {
            if(i%2==0)
                cout<<"L";
            else
                cout<<"R";
        }
    }


}




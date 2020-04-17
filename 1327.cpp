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
   int tc;
   cin>>tc;
   for(int t=0;t<tc;t++)
   {
       int n,ck;
       cin>>n;
       int p[100005];
       clr(p);
       vector<int>v[n],nf;
       for(int i=0;i<n;i++)
       {
           int no;
           cin>>no;
           for(int j=0;j<no;j++)
           {
               int x;
               cin>>x;
               v[i].push_back(x);
           }
       }
       ck=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<v[i].size();j++)
           {
               if(p[v[i][j]]==0)
               {
                   ck=1;
                   p[v[i][j]]=1;
                    break;
               }
           }
           if(ck==0)
           {
               nf.push_back(i);
           }
           ck=0;
       }
       /*for(int i=1;i<=n;i++)
        cout<<p[i]<<" ";
       cout<<endl;*/
       if(nf.size()==0)
        cout<<"OPTIMAL"<<endl;
       else
        {
           cout<<"IMPROVE"<<endl;
            for(int i=1;i<=n;i++)
           {
               if(p[i]==1);
                else
                {
                    cout<<nf[0]+1<<" "<<i<<endl;
                    break;
                }
           }

        }

   }


}




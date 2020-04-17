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
int calculate(int a[],int be,int en,int mx_number)
{

    for(int i=be;i<en;i++)
    {
        if(a[i]!=mx_number)
        {
           cnt[a[i]]=cnt[a[i]]-1;
        }
        else
        {
            cnt[a[i]]=cnt[a[i]]-1;
            x=i;
            break;
        }
    }
    return en-x+1;
}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int T;
    cin>>T;

    for(int tc=1;tc<=T;tc++)
    {
        int n,be=0,en,mx=0,mx_number,mn=1000000;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            cnt[a[i]]++;
            //cout<<cnt[a[i]]<<endl;
            if(cnt[a[i]]>mx)
            {
                mx=cnt[a[i]];
                mx_number=a[i];
               // cout<<mx<<" "<<mx_number<<endl;
                if(cnt[a[i]]>1)
               {
                mn=min(mn,calculate(a,be,i,mx_number));
                be=x+1;
                mx--;
                }
            }
        }
        if(n==1 || mn==1000000)
        cout<<-1<<endl;
        else
            cout<<mn<<endl;
        cnt.clear();
    }


}



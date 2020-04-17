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
string sp(string s,int k)
{
    string b;
    b=s;
    int n=b.size();
    int j=0;
    for(int i=k-1;i<n;i++)
       {b[j]=s[i];
        j++;}
    //cout<<b<<endl;
   // cout<<s.length()-k+1<<endl;
    //cout<<j<<endl;
    if((s.length()-k+1)%2==0)
    {
        for(int i=0;i<k-1;i++)
       {b[j]=s[i];
        j++;}
    }
    else
    {
         for(int i=k-2;i>=0;i--)
       {b[j]=s[i];
        j++;}
    }
    return b;
}

int main()
{
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int t;
    cin>>t;
    while(t--)
    {
        int l,mx=-1,ans=1;
        cin>>l;
        string s,y,an;
        cin>>s;
        an=s;
        for(int i=2;i<=l;i++)
        {
            y=sp(s,i);
            if(y<an)
            {
                an=y;
                ans=i;
            }
        }
        cout<<an<<endl;
        cout<<ans<<endl;
    }
    return 0;

}






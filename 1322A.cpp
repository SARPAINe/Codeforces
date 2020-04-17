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


int main()
{
    int n,cnt=0,last0=-1,ans=0,prev=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            cnt++;
        else
            cnt--;
    }
    if(cnt!=0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            cnt++;
        else
            cnt--;
        if(cnt==0&&prev<0)
        {
            ans+=(i-last0);
            last0=i;
        }
        else if(cnt==0)
        {
            last0=i;
        }
        prev=cnt;
    }

    cout<<ans<<endl;
}




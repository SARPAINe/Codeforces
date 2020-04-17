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
    /*freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        int j=n+m;
        for(int i=0;i<j;i++)
        {
            if((x/2)+10<=x&&n>0)
                {x=(x/2)+10;
                n--;}
             else if(m>0)
            {
                x=x-10;
                m--;
            }
            //cout<<x<<endl;
            if(x<=0)
                break;

        }

        if(x>0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
	return 0;

}





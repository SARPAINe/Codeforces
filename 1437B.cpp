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

using namespace std;

typedef long long int lli;
typedef list<int> li;
typedef pair<int,int>pii;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ozero=0,oone=0,ezero=0,eone=0,cnta=0,cntb=0,ck=0;
        cin>>n;
        string s,a,b;
        cin>>s;
        a=s;
        b=s;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                a[i]='0';
                b[i]='1';
            }
            else
            {
                a[i]='1';
                b[i]='0';
            }
        }
//        cout<<a<<endl;
//        cout<<s<<endl;
//        cout<<b<<endl;
        for(int i=0; i<n; i++)
        {
            if(a[i]==s[i])
            {
                if(ck==0);
                else
                {
                    ck=0;
                }
            }
            else
            {
                if(ck==0)
                    cnta++,ck=1;
            }
        }
        ck=0;
        for(int i=0; i<n; i++)
        {
            if(b[i]==s[i])
            {
                if(ck==0);
                else
                {
                    ck=0;
                }
            }
            else
            {
                if(ck==0)
                    cntb++,ck=1;
            }
        }

        cout<<min(cnta,cntb)<<endl;
    }
    return 0;



}






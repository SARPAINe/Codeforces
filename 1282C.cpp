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


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int tc;
    cin>>tc;
    for(int t=0;t<tc;t++)
    {
        lli n,time,a,b,cnt=0,ans=0,noSimple=0,noDifficult=0,noS=0,noD=0;
        cin>>n>>time>>a>>b;
        vector<pii>v;
        lli x[n],y[n];
        for(int i=0;i<n;i++)
            {
                cin>>x[i];
            if(x[i]==0)
                noS++;
            else
                noD++;

            }

        for(int i=0;i<n;i++)
            cin>>y[i];
        //cout<<noS<<"--- "<<noD<<endl;
        /*for(int i=0;i<n;i++)
            cout<<x[i]<<" ";
        for(int i=0;i<n;i++)
            cout<<y[i]<<" ";*/
         for(int i=0;i<n;i++)
        v.push_back(make_pair(y[i],x[i]));
        v.push_back(make_pair(time+1,0));
        sort(v.begin(),v.end());
       //for(int i=0;i<n;i++)
       // cout<<v[i].first<<" "<<v[i].second<<endl;
        for(int i=0;i<=n;i++)
        {
            //
           // cout<<"i:"<<i<<endl;
           // cout<<(noSimple*a+noDifficult*b)<<" --"<<((v[i].first)-1)<<endl;

            if( (noSimple*a+noDifficult*b)<=((v[i].first)-1) )
            {
                ans+=noSimple+noDifficult;
                lli remS,remD,remT;
                remS=noS-noSimple;
                remD=noD-noDifficult;
                 remT=((v[i].first)-1)-(noSimple*a+noDifficult*b);
                //cout<<ans<<": "<<remS<<" "<<remD<<" "<<remT<<endl;
                if(remS>0)
                {
                    //cout<<"fjjf:"<<remT/a<<endl;
                    if(remT/a<=remS)
                       {
                        ans+=remT/a;
                        remT-=((remT/a)*a);}
                    else
                        {ans+=remS;
                         remT-=(remS*a);}


                    //if(i==n)
                      //  ans--;
                }
                if(remD>0)
                {
                    if(remT/b<=remD)
                        {ans+=remT/b;
                        remT-=((remT/b)*b);}
                    else
                        {ans+=remD;
                         remT-=(remD*b);
                        }
                }

            }

            if(v[i].second==0)
                noSimple++;
            else
                noDifficult++;

            cnt=max(ans,cnt);
            ans=0;
            //cout<<"ans:"<<cnt<<endl;
        }
         /*if( (noSimple*a+noDifficult*b)<=time )
            ans+=noSimple+noDifficult;
         cnt=max(ans,cnt);*/


    cout<<cnt<<endl;
        //cout<<"ans:"<<cnt<<endl;

    }


}



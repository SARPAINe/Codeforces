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
#define fi(l,r) for(int i=l;i<r;i++)
#define fj(l,r) for(int j=l;j<r;j++)

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
        int n,n2;
        cin>>n;
        n2=n;
        vector<pii>val;
        for(int i=2;i*i<=n;i++)
        {
            int cnt=0;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            if(cnt>0)
            {
                val.push_back({cnt,i});
            }
        }
        if(n>=2)
            val.push_back({1,n});
//        cout<<val.size()<<endl;
        if(val.size()>=3){
            cout<<"YES"<<endl;
            cout<<val[0].second<<" "<<val[1].second<<" "<<n2/(val[0].second*val[1].second)<<endl;
        }
        else if(val.size()==1){
//                cout<<"entered"<<endl;
            if(val[0].first<6)
            {
                cout<<"NO"<<endl;
            }
            else{
            cout<<"YES"<<endl;
            cout<<val[0].second<<" "<<val[0].second*val[0].second<<" "<<n2/(val[0].second*val[0].second*val[0].second)<<endl;

            }
        }
        else{
            int ck=n2/(val[0].second*val[1].second);
            if(ck>=2 && ck!=val[0].second && ck!=val[1].second)
            {
                cout<<"YES"<<endl;
            cout<<val[0].second<<" "<<val[1].second<<" "<<ck<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;



}





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
    int cntTest;
    cin >> cntTest;
    for (int test = 0; test < cntTest; test++) {
        int n, p, k;
        cin >> n >> p >> k;
        int pref = 0;
        int ans = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i <= k; i++) {
            int sum = pref;
            if (sum > p) break;
            int cnt = i;
            for (int j = i + k - 1; j < n; j += k) {
                if (sum + a[j] <= p) {
                    cnt += k;
                    sum += a[j];
                } else {
                    break;
                }
            }
            pref += a[i];
            ans = max(ans, cnt);
            //cout<<ans<<" "<<i<<endl;
        }
        cout << ans << "\n";
    }

}



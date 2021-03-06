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
    int n;
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int j = i;
        while (j < n && s[i] == s[j])
        {
            ++j;
        }
        string q = "RGB";
        q.erase(q.find(s[i]), 1);
        if (j < n) q.erase(q.find(s[j]), 1);
        for (int k = i + 1; k < j; k += 2)
        {
            ++ans;
            s[k] = q[0];
        }
        i = j - 1;
    }

    cout << ans << endl << s << endl;

    return 0;






}









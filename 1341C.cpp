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

#define MAX 100005


int main()
{
    int t, n, A[MAX];
    bool possible;

    cin >> t;
    for(int a = 0; a < t; a++){
        possible = 1;

        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(i > 0 && A[i] > A[i - 1] && A[i] - 1 != A[i - 1])
                possible = 0;
        }

        if(possible == 0)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
    return 0;
}






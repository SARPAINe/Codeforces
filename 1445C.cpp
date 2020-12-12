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

set<int>divisors;
void printDivisors(int n)
{
    divisors.insert(1);
//    printf("1 ");
    for (int i=1; i*i<=n; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                {divisors.insert(i);
                ///printf("%d ", i);
                }


            else // Otherwise print both
                {
                    divisors.insert(i);
                    divisors.insert(n/i);
                   /// printf("%d %d ", i, n/i);
                }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        divisors.clear();
        lli pi,qi;
        cin>>pi>>qi;
//        if(pi<qi)
//        {
//            cout<<pi<<endl;
//        }
//        else if(pi==qi)
//        {
//              cout<<pi/2<<endl;
//        }
//        else
//        {
//
//        }
        printDivisors(1000000000);
        cout<<divisors.size()<<endl;
       for(auto it=divisors.begin();it!=divisors.end();it++)
        cout<<*it<<" ";

    }

    return 0;



}


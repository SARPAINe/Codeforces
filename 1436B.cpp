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

///cntrl+shift+c=comment highlighted code
///cntrl+shift+c to comment out and x to reverse
vector<int> v;
bool prime[1000];
void sieveoferanthones()
{


    // Intially all the numbers
    // are marked as prime
    memset(prime, true,
           sizeof(prime));

    // Loop to mark the prime numbers
    // upto the Square root of N
    for (long long int i = 2; i <= sqrt(1000);
         i++) {
        if (prime[i])
            for (long long int j = i * i;
                 j <= 1000; j += i) {
                prime[j] = false;
            }
    }

    // Loop to store the prime
    // numbers in an array
    v.push_back(1);
    for (long long int i = 2; i < 1000; i++) {
        if (!prime[i])
            v.push_back(i);
    }
}

int main()
{
   int tc;
   cin>>tc;
   sieveoferanthones();
   while(tc--)
   {
       int n,ans;
       cin>>n;
//       for(int i=0;i<v.size();i++)
//        cout<<v[i]<<endl;
        for(int i=0;i<v.size();i++)
        {
            int ck=n-1+v[i];
            if(prime[ck]==true)
            {
                ans=v[i];
                break;
            }
        }
        int sq[n+1][n+1];
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {

                sq[i][j]=1;
        }
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                sq[i][j]=ans;
        }
        for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(j==n)
             cout<<sq[i][j]<<endl;
            else
            cout<<sq[i][j]<<" ";
        }
   }

}






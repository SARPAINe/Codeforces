#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int a[10005],b,i,j,k,l,n1=0,n;
    cin>>n;
    cin>>s>>t;

    for(i=0;i<s.size();i++)
    {
        if(s[i]!=t[i]){
                //cout<<t[i];
           l= s.find(t[i],i+1);//cout<<l;
            if(l==-1)
            {cout<<"-1";return 0;}
            for(j=l;j>i;j--)
            {
                swap(s[j],s[j-1]);
                a[n1]=j;n1++;
            }
            //cout<<s<<endl;
        }
    }
    cout<<n1<<endl;
     for(i=0;i<n1;i++)
     {
         cout<<a[i]<<" ";
     }
}

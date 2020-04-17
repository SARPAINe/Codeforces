#include<iostream>
#include<cstdio>
#include<map>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int b,d[1002],i,j,m=0,s=0;
    string c[1002],p;
    map<string,int>a,l;
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        cin>>c[i]>>d[i];
        a[c[i]]=a[c[i]]+d[i];

    }
     for(i=0;i<b;i++)
        {
            m=max(a[c[i]],m);
        }
     for(i=0;i<b;i++)
    {

        l[c[i]]=l[c[i]]+d[i];
        //cout<<l[c[i]]<<" "<<a[c[i]]<<endl;
        if(l[c[i]]>=m && a[c[i]]==m)
        {
            cout<<c[i]<<endl;
            break;
        }
    }
    //cout<<p<<endl;



}

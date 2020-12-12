#include<bits/stdc++.h>
using namespace std;
int top;
int main()
{
    int n,i,j,k;
    string cmd,s,x;
    scanf("%d",&n);
    s="/";
    for(i=0; i<n; i++)
    {
        cin>>cmd;
        if(cmd=="pwd")cout<<s<<endl;
        else
        {
            cin>>cmd;
            cmd+="/";
            for(j=0; j<cmd.length(); j++)
            {
                x+=cmd[j];
                if(cmd[j]=='/')
                {

                    if(x=="../")
                    {
                        for(k=s.length()-1; s[k-1]!='/'; k--);
                        s.resize(k);
                    }
                    else if(x=="/")s=x;
                    else s+=x;
                    x.clear();
                }
            }
        }
    }
    return 0;
}

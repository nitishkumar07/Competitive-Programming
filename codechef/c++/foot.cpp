#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,s,i,j,l,a=0;
        cin>>n>>s;
       long long int m[n],p[n];
        for(i=0;i<n;i++)
        cin>>m[i];
        for(i=0;i<n;i++)
        cin>>p[i];
        l=100-s;
        for(i=0;i<n;i++)
        {
            if(p[i]==0)
            {
                for(j=0;j<n;j++)
                {
                    if(p[j]==1)
                    {
                        if(l>=(m[i]+m[j]))
                        {
                            cout<<"yes"<<"\n";
                            a=1;
                            break;
                        }
                   }
                }
                if(a==1)
                break;
             }
        }
        if(a==0)
        cout<<"no"<<"\n";
   }
   return 0;
}
                   

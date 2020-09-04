#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,q,ans=0;
        cin>>n>>q;
        long int f[q],d[q];
        for(int i=0;i<q;i++)
        {
            cin>>f[i]>>d[i];
        }
        for(int i=0;i<q;i++)
        {
            if(i>0)
            {
                ans=ans+fabs(d[i-1]-f[i])+fabs(f[i]-d[i]);
            }
            else
            {
                ans=ans+f[i]+fabs(f[i]-d[i]);
            }
        }
        cout<<ans<<"\n";
     }
     return 0;
}

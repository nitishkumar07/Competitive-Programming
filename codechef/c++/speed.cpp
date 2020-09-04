#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j,c,d;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        c=d=j=0;
        for(i=0;i<n;i++)
        {
            if(c==d)
            {
                c=c+a[i];
                d=d+b[i];
                if(c==d)
                j=j+a[i];
             }
             else
             {
                c=c+a[i];
                d=d+b[i];
             }
       }
       cout<<j<<"\n";
    }
    return 0;
}
                

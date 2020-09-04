#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j;
        cin>>n>>k;
        int a[n],b[n-k],rm[k];
        for(i=0;i<k;i++)
        cin>>rm[i];
        sort(rm,rm+k);
        for(i=0;i<n;i++)
        a[i]=i+1;
        int p=0;
        for(i=0;i<n;i++)
        {
            for(j=p;j<k;j++)
            {
                if(a[i]==rm[j])
                {
                    a[i]=0;
                    p=j;
                    break;
                }
            }
        }
        p=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
            b[p]=a[i];
            p++;
            }
       }
       for(i=0;i<n-k;i++)
       {
            if(i%2==0)
            cout<<b[i]<<" ";
       }
       cout<<"\n";
       for(i=0;i<n-k;i++)
       {
        if(i%2!=0)
        cout<<b[i]<<" ";
       }
       cout<<"\n";
    }
}   
        

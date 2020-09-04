#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,k,p,q,i,j,temp;
        cin>>n>>k;
        unsigned long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+k])
            {
                temp=a[i];
                a[i]=a[i+k];
                a[i+k]=temp;
            }
            long long int p=0;
            for(j=0;j<n;j++)
            {
                if(a[j]<a[j+1])
                {
                    p=0;
                }
                else
                {
                    p=1;
                    break;
                    }
            }
          if(p==0)
          {
            cout<<"yes"<<"\n";
            break;
          }
        }
        if(p==1)
        cout<<"no"<<"\n";
     }
     return 0;
}
                

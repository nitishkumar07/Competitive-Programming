#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,c,mina,minb,sum;
        c=0;sum=0;
        int d=0;
        cin>>n;
        long long int a[n],b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        mina=a[0];minb=b[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<mina)
            mina=a[i];
            if(b[i]<minb)
            minb=b[i];
        }
        for(i=0;i<n;i++)
        {
           sum=sum + max(a[i]-mina,b[i]-minb);
        }
      cout<<sum<<"\n";
   }
     return 0;
}

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,sum=0,i,j,temp;
        cin>>n;
       unsigned long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
      std::sort(a,a+n,greater<int>());
        for(j=0;j<n;j++)
        {
            sum=sum+a[j];
            for(i=j+1;i<n;i++)
            {
                if(a[i]!=0)
                a[i]=a[i]-1;
            }
        }
        cout<<sum<<"\n";
     }
     return 0;
}
            

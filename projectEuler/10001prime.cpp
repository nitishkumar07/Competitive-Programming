#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,a,b=0,i;
    cin>>n;
    for(i=2;b!=n;i++)
    {
        a=0;
        for(long int j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            a++;
         }
         if(a==1)
         {
            b++;
         }
     }
     cout<<i-1;
     return 0;
}
        

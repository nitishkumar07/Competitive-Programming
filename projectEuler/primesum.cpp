#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i,j,a,sum=0;
    cin>>n;
    for(i=2;i<n;i++)
    {
        a=0;
        for(j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                a++;
            }
            if(a>2)
            break;
        }
        if(a==1)
        sum=sum+i;
     }
     cout<<sum;
     return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int i,j,n,num,rev,rem,t,k;
    cin>>t;
    k=t-(t/9);
    for(i=t;i>=k;i--)
    {
        for(j=t;j>=k;j--)
        {
            rev=0;
            n=j*i;
            num=n;
            while(num)
            {
                rem=num%10;
                num=num/10;
                rev=(rev*10)+rem;
             }
             if(rev==n)
             {
             cout<<i<<" "<<j<<"\n";
             cout<<n;
             exit(0);
             }
         }
    }
    return 0;
}
            
            

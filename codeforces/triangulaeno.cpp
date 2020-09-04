/* Best program to find no of divisors*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i,j,c,p,w;
    i=1;p=2;c=0;
    cin>>w;
    while(i>0)
    {
        c=0;
        n=i+p;
        for(j=1;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                if(n/j==j)
                c=c+1;
                else
                c=c+2;
            }
         }
         if(c>=w)
         {
            cout<<n<<" "<<p+1;
            exit(0);
         }
         i=n;
         p++;
     }
     return 0;
}
         

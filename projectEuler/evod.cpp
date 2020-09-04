/*14 q of eular project*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,i,j=0,m=0,p;
    for(i=2;i<1000000;i++)
    {
        n=i;
        j=1;
        while(n>1)
        {
          if(n%2==0)
            {
                n=n/2;
                j++;
            }
           else
            {
                n=(3*n)+1;
                j++;
            }
        }
        if(j>m)
        {
          m=j;
          p=i;
        }
    }
    cout<<p<<" "<<m;
    return 0;
}
            
                    

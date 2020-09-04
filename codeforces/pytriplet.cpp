#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,product=1;
    int i,j;
    for(a=0;a<12/3;a++)
    {
        for(b=1;b<12/2;b++)
        {
            c=12-a-b;
            if((a*a)+(b*b)==(c*c))
            {
                product=a*b*c;
                cout<<product;
             }
        }
        
     }
     return 0;
}

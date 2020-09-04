/* euler project problem 3*/
#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int n,i,max=0;
    scanf("%llu",&n);
    for(i=2;i<sqrt(n);i++)
    {
        long long int c=0;
        for(int j=2;j<sqrt(i);j++)
         {
            if ( i%j==0)
            c++;
         }
            if(c==0)
            {
                if(n%i==0)
                {
                    if(max<i)
                    max=i;
                }
            }
    }
    printf("%llu",max);
    return 0;
}

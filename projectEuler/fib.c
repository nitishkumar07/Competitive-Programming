/*project euler problem 2*/
#include<stdio.h>
#include<stdlib.h>
int main()
{   
    long long int a=1,b=2,c,add=2;
    int i=1;
    while(i>0)
    {
        c=a+b;
        a=b;
        b=c;
        if(c>=4000000)
        {
            printf("%lld",add);
            exit (0);
            }
         if(c%2==0)
        add=add+c;
        
    }
    return 0;
}
        
    

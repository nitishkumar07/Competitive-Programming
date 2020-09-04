#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int t,n,a,b,c,d,e,s;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        scanf("%ld",&a);
        if(a<=10^n)
        {
            s=5*a;
            printf("%ld\n",s);
            scanf("%ld",&b);
            c=(s-(2*(a)+b))*0.6;
            printf("%ld\n",c);
            scanf("%ld",&d);
            e=s-(a+b+c+d);
            printf("%ld\n",e);
            if(e>0)
            printf("1\n");
         }
    }
    return 0;
}

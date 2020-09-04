#include<stdio.h>
int main()
{
    long int n,num,add=0,rem,i,p;
    scanf("%ld",&p);
    for(i=0;i<p;i++)
    {
        scanf("%ld",&n);
        num=n;
        add=0;
        while(num!=0)
        {
            rem=num%10;
            num=num/10;
            add=add+rem;
        }
        printf("%ld\n",add);
    }
    return 0;
}
    

#include<stdio.h>
int main()
{
    int n,num,rev,rem,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&num);
        rev=0;
        while(num!=0)
        {
            rem=num%10;
            num=num/10;
            rev=rev*10+rem;
        }
        printf("%d\n",rev);
    }
    return 0;
}
            

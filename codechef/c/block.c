#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,num,rev=0,rem;
        scanf("%d",&n);
        num=n;
        while(num)
        {
            rem=num%10;
            num=num/10;
            rev=rev*10+rem;
        }
        if(rev==n)
        printf("wins\n");
        else
        printf("losses\n");
    }
    return 0;
}

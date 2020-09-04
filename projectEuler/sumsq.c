#include<stdio.h>
int main()
{
    long long int n,sum=0,c=0,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        c=c+i*i;
    }
    printf("%lld",(sum*sum)-c);
    return 0;
}

#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,m,x,y,sum;
        scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
        sum=n*x;
        sum=sum+m*y;
        if(sum%2==0)
        printf("YES\n");
        else
        printf("NO\n");
     }
     return 0;
}


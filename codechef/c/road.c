#include<stdio.h>
int main()
{
    long long int t,x=0;
    scanf("%lld",&t);
    t=t-1;
    while(t--)
    {
        int u,v,w,sum;
        scanf("%d%d%d",&u,&v,&w);
        sum=u*w;
        sum=sum+u*w;
        if(sum>x)
        x=sum;
    }
    printf("%lld",x);
    return 0;
}

/*max chocolate to buy*/
#include<stdio.h>
#include<stdlib.h>
int cmp(const void *p, const void *q)
{
    const int *a=p;
    const int *b=q;
    return *a-*b;
}
int main()
{
    long long int n,k,i,sum=0;
    scanf("%lld%lld",&n,&k);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    qsort(a,n,sizeof(long long int),cmp);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if (k<sum)
        break;    
    }
    printf("%lld",i);
    return 0;
}

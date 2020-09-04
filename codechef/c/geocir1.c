/*program to find max diameter of circle incribed in rectangle*/
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
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,sum=0;
        scanf("%lld",&n);
       long long int a[n],b[n];
        for(long long int i=0;i<n;i++)
        scanf("%lld",&a[i]);
        for(long long int i=0;i<n;i++)
        scanf("%lld",&b[i]);
        qsort(a,n,sizeof(long long int),cmp);
        qsort(b,n,sizeof(long long int),cmp);
        for(long long int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            sum=sum+b[i];
            else
            sum=sum+a[i];
        }
        printf("%lld\n",sum);
     }
     return 0;
}

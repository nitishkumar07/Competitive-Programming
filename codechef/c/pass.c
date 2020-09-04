#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,j,c=0;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[i]+a[j])%2!=0)
                c++;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}

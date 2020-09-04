#include<stdio.h>
#include<string.h>
int main ()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long long int n,q,i,k,j,count,p,l;
        scanf("%lld%lld",&n,&q);
        char a[2*n],b[2*n];
        scanf("%s",a);
        for(long long int m=0;m<q;m++)
        {
            scanf("%lld",&p);
            while(p--)
            {
                k=-1;
                for(i=0;i<3*n;i++)
                {
                    for(j=i+1;j<3*n;j++)
                    {
                        if(a[i]==a[j])
                        {
                            k=k+1;
                            b[k]=a[i];
                            break;
                        }
                    }
                }
                for(i=0;i<=k;i++)
                {
                    a[i]=b[i];
                }
            }
             count=strlen(a);
                printf("%lld\n",count);
        }
    }
     return 0;
}

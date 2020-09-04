#include<stdio.h>
#include<math.h>
int main()
{
    int t,a[10000],b[10000],i,c[100000],sum[100000],max,j,d[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
       for(i=0;i<t;i++)
       {    
            c[i]=0;d[i]=0;
            c[i]=c[i]+a[i];
            d[i]=d[i]+b[i];
            sum[i]=fabs(c[i]-d[i]);
            
       }
        max=0;
        for(i=0;i<t;i++)
        {
        if(sum[i]>=sum[max])
        {
            max=i;
        }
        }
        if(c[max]-d[max]>0)
        j=1;
        else
        j=2;
        printf("%d %d",j,sum[max]);
        return 0;
}

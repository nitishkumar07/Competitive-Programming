#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d%d",&n,&m);
       int a[n],b[n],c[m];
       for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
       for(int i=0;i<n;i++)
       scanf("%d",&b[i]);
       for(int i=1;i<=m;i++) //different fruits
       {
             int d=0;
            for(int j=0;j<n;j++)
            {
                if(a[j]==i)
                d=d+b[j];
            }
            c[i]=d;
       }
       int min=c[1];
       for(int i=1;i<=m;i++)
       {
            if(c[i]==0)
            continue;
            else
            {
            if(c[i]<min)
            min=c[i];
            }
       }
       printf("%d\n",min);
    }
    return 0;
}
       
                

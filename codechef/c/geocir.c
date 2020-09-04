#include<stdio.h>
int sort(int n,int a[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
             }
        }
    }
}
    
int main(void)
{
    int t,n,a[100000],b[100000],i;
    scanf("%d",&t);
    while(t--)
    {
        int add=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d%d",&a[i]);
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
        sort(n,a);
        sort(n,b);
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
            add=add+b[i];
            else
            add=add+a[i];
        }
        printf("%d\n",add);
    }
}
        
        

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,q,count=0;
        scanf("%d",&p);
        int a[p];
        for(int i=1;i<=p-1;i++)
        scanf("%d",&a[i]);
        scanf("%d",&q);
        int b[q];
        for(int i=1;i<=q-1;i++)
        scanf("%d",&b[i]);
        a[0]=b[0];
        for(int i=1;i<=p-1;i++)
        {
            if(a[i]-a[i-1]==b[i]-b[i-1])
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

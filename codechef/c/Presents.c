#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]=i;
    }
    for(i=1;i<=n;i++)
    printf("%d ",b[i]);
    return 0;
}

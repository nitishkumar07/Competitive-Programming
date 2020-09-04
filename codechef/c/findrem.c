#include<stdio.h>
int main()
{
    int n,a,b,t,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(b!=0)
        printf("%d\n",a%b);
    }
     return 0;
}

/*valid triangle*/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,sum;
        scanf("%d%d%d",&a,&b,&c);

        sum=a+b+c;
        if(sum==180)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}


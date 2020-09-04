/*largest number in an array*/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,temp=0;
        scanf("%d",&n);
        while(n--)
        {
            int a;
            scanf("%d",&a);
            if(temp<a)
            temp=a;
        }
        printf("%d\n",temp);
    }
    return 0;
}

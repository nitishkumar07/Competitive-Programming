#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a=0,i;
        while(a<n)
        {
            if(n>2048)
            {
                for(i=0;n>2048;i++)
                {
                    n=n-2048;
                    c=c+1;
                }
            }
            for(i=0;pow(2,i)<=(n-a);i++);
            i--;
            a=a+pow(2,i);
            c=c+1;
         }
         printf("%d\n",c);
    }
    return 0;
}
            

#include<stdio.h>
#include<math.h>
int main()
{
   int t;
    scanf("%d",&t);
    while(t--)
    {
      int n,i,c=0;
        scanf("%d",&n);
        if(n==2)
        printf("yes\n");
        else
        {
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
            c=1;
            break;
            }
        }
            if(c==0)
            printf("yes\n");
            else
            printf("no\n");
     }
   }
     return 0;
}

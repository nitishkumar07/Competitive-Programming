#include<stdio.h>
#include<string.h>
int main(void)
{
    int t,n=0,m,x,c;
    scanf("%d",&t);
    while(t--)
    {
        char s[1000];
        scanf("%s",s);
        n=strlen(s);
        if(n%2==0)
        {
           m=n/2;
           x=m;
         }
         else
         {
            m=(n+1)/2;
            x=m-1;
         }
         for(int i=0;i<x;i++)
         {
            c=0;
            for(int j=m;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    s[j]='*';
                    c=1;
                    break;
                 }
             }
             if(c!=1)
             {
                printf("No\n");
                break;
             }
            }
            if(c==1)
            printf("Yes\n");
      }
      return 0;
}

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,k,n,p=0;
        scanf("%d%d",&n,&k);
        char a[100];
        for(i=0;i<n;i++)
        scanf("%c",&a[i]);
        for(i=0;i<k;i++)
        {
            if(a[n-1-i]=='T')
            a[n-1-i]='\0';
            else if(a[n-1-i]=='H')
            {
            for(i=0;i<n-1;i++)
            {
              if(a[i]=='H')
              a[i]='T';
              else
              a[i]='H';
            }
            a[n-1-i]='\0';
            }
       }
       for(i=0;i=n-k;i++)
       {
            if(a[i]=='H')
            p++;
       }
       printf("%d\n",p);
    }
    return 0;
}
        

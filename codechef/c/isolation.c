#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,q,p,i,j;
        scanf("%d%d",&n,&q);
        char a[n+1],b[n+1],c[n+1];
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
            c[i]=a[i];
            c[i]='\0';
        while(q--)
        {
            for(i=0;c[i]!='\0';i++)
            a[i]=c[i];
            a[i]='\0';
            int len;
            scanf("%d",&p);
          while(p--)
          {
                int k=-1;
                for(i=0;a[i]!='\0';i++)
                {
                    for(j=i+1;a[j]!='\0';j++)
                    {
                        if(a[i]==a[j])
                        {
                            k=k+1;
                            b[k]=a[i];
                            break;
                        }
                    }
                }
                len=strlen(b);
                for(i=0;i<len;i++)
                a[i]=b[i];
                a[i]='\0';
                
           }
           len=strlen(b);
           printf("%d\n",len);
        }
    }
    return 0;
}

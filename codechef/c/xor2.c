#include<stdio.h>
#include<string.h>

int main()
{
    char c[1000000];
    scanf("%s",c);
    int l=strlen(c),a[1000000],n,i;
    for(i=0;i<l;i++)
    {
        a[i]=c[i]-'0';
    }
    n=a[l-1];
    if(l>1)
        n+=a[l-2]*10;
    switch(n&3)
    {
        case 0: 
        {
            for(i=0;i<l;i++)
                printf("%d",a[i]);
            break;
        }
        case 1: 
        {
            printf("1");
            break;
        }
        case 2:
        {
            a[l-1]++;
            for(i=0;i<l;i++)
                printf("%d",a[i]);
            break;
        }
        case 3:
        {
            printf("0");
            break;
        }
    }
}

#include<stdio.h>
#include<string.h>
int main()
{
    int n,len,i,j,temp;
    char s[100000];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        i=0;
           while(s[i]!='\0')
        {
            j=i+1;len=i;
            while(s[j]!='\0')
            {
                if(s[j]>s[len])
                {
                    temp=s[j];
                    s[j]=s[len];
                    s[len]=temp;
                }
                j++;
            }
            i++;
        }
        printf("%s\n",s);
     }
     return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x=0,y=0;
        scanf("%d",&n);
        char s[n+1],ch;
        scanf("%s",s);
        int p;ch='a';
        p=strlen(s);
        for(int i=0;i<p;i++)
        {
            if(s[i]=='L')
            {
                if(ch=='L' || ch=='R')
                continue;
                else
                {
                    x=x-1;
                    ch='L';
                }
            }
            else if(s[i]=='R')
            {
                if(ch=='R' || ch=='L')
                continue;
                else
                {
                    x=x+1;
                    ch='R';
                }
            }
            else if(s[i]=='U')
            {
                if(ch=='U' || ch=='D')
                continue;
                else
                {
                    y=y+1;
                    ch='U';
                }
            }
            else if(s[i]=='D')
            {
                if(ch=='D' || ch=='U') 
                continue;
                else
                {
                    y=y-1;
                    ch='D';
                }
            }
       }
       printf("%d %d\n",x,y);
    }
    return 0;
}

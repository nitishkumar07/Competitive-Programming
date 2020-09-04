#include<stdio.h>
#include<string.h>
int main()
{
    int t,j;
    char s[11],c[11];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s",s);
       char c[11]={"ldrwolloeh"};
        while(s[j]==c[j]&&s[j]!='\0'&&c[j]!='\0')
            j++;
       if(s[j]=='\0'&&c[j]=='\0')
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}

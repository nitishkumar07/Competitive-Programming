/*program to convert 12 hours to 24 hours*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void hours(char *s)//for string we should take pointer
{
    //to convert char to int we need to subtract with 0
      int h1 = (int)s[1] - '0'; 
    int h2 = (int)s[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10); 
        if(s[8]=='A')
        {
            if(hh==12)
            {  
                     
            printf("00");
            //first 2 char is already printed
            for(int i=2;i<=7;i++)
            printf("%c",s[i]);//we need to print char by char
            }
            else
            {
            for(int i=0;i<=7;i++)
            printf("%c",s[i]);
            }
        }
            else
        {
            if(hh==12)
            {
            printf("12");
            for(int i=2;i<=7;i++)
            printf("%c",s[i]);
            }
            else
            {
            hh=hh+12;
            printf("%d",hh);
            for(int i=2;i<=7;i++)
            printf("%c",s[i]);
            }
        }
}
int main()
{
    char s[10];
    scanf("%s",s);
    hours(s);
    return 0;
}

#include<stdio.h>
{
    int n;
    scanf("%d",&n);
    if(n%4==0)
    printf("%d",n+1);
    else
    printf("%d",n-1);
    return 0;
}
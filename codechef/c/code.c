#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
   while(t--)
    {
        char ch;
        scanf(" %c",&ch);
        if(ch=='B' || ch=='b')
        printf("BattleShip\n");
        if(ch=='C' || ch=='c')
        printf("Cruiser\n");
        if(ch=='D' || ch=='d')
        printf("Destroyer\n");
        if(ch=='F' || ch=='f')
        printf("Frigate\n");
    }
    return 0;
}
   
   

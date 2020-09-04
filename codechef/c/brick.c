/*number of shot taken by girl to break given bricks*/ 
#include<stdio.h>
int main()
{
    int n,s,w1,w2,w3;
    //s=strength of girl and w1,w2,w3 are strength of bricks
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d %d",&s,&w1,&w2,&w3);
        if(s>=(w1+w2+w3))
        printf("1\n");
        else if(s>=(w1+w2))
        printf("2\n");//first 2 bricks then 3rd
        else if(s<(w1+w2))
        {
            if(s>=(w2+w3))
            printf("2\n");//first 1 brick then other 2 bricks
            else
            printf("3\n");//1 brick at a time
        }
    }
        return 0;
}

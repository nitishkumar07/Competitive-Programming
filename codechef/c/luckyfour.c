#include<stdio.h>
int main()
{
    long int num,rem,t,i,freq;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&num);
        freq=0;
        while(num!=0)
        {
            rem=num%10;
            num=num/10;
            if(rem==4)
            freq++;
        }
        printf("%ld\n",freq);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float q,p;
        scanf("%f%f",&q,&p);
        if (q >= 1000) {
	        printf("%.6f\n", p*q*0.9);
	    }
	    else {
	        printf("%.6f\n", q*p);
        }
    }
    return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
     int n;
    scanf("%d",&n);
    while(n)
    {
         int f,b,a,s,ss;
         float t1,t2,k;
        scanf("%d%d%d%d",&f,&b,&a,&s);
        t1= (float)f/s;
        ss=f+b;
        k= (float)(2*(ss))/a;
        t2=sqrt(k);
        if(t1<t2)
        printf("Bolt\n");
        else
        printf("Tiger\n");
        n--;
    }
    return 0;
}

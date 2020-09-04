#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,a,num,l,f,sum;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        a=0;num=n;
        while(num>0)
        {
           num=num/10;
            a++;
        }
        l=n%10;
        f=n/(pow(10,a-1));
        sum=l+f;
        printf("%d\n",sum);
        t--;
    }
    return 0;
}
        
            
        

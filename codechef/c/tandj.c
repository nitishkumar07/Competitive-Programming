#include<stdio.h>
void find(long long int ts)
{
    long long int add=0;
    if(ts==1)
    printf("0\n");
    else if(ts%2!=0)
    {
        add=(ts-1)/2;
        printf("%lld\n",add);
        
     }
     else
     {
        return find(ts/2);
     }
  }
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int ts,i;
        scanf("%lld",&ts);
        find(ts);
    }
    return 0;
}

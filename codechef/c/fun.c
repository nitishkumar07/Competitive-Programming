#include<stdio.h>
int sum(int d,int n)
{
    int i,s;
    for(i=0;i<d;i++)
    {
        s=0;
        for(int j=1;j<=n;j++)
        {
            s=s+j;
        }
        n=s;
     }
     return n;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int d,n,su=0;
        scanf("%d%d",&d,&n);
        su=su+sum(d,n);
        printf("%d\n",su);
    }
  return 0;
}

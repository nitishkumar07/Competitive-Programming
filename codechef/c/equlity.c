#include<stdio.h>
int main()
{
    long int n,q,i,j;
    int a[1000000],l,r,inc,dec;
    scanf("%ld%ld",&n,&q);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   j=1;
   while(j<=q)
    {
        scanf("%d  %d",&l,&r);
        inc=0;dec=0;
        i=(l-1);
        while(i<(r-1))
        {
            if(a[i]<a[i+1])
            inc++;
            else
            dec++;
            i++;
        }
        if(inc==dec)
        printf("YES\n");
        else
        printf("NO\n");
        j++;
    }
     return 0;
}
            
        
    
    

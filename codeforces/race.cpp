#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i;
       scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        long long int c=0;
        long long int max=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<=max)
            {
                c++;
                max=a[i];
            }
        }
        printf("%lld\n",c);
     }
     return 0;
}

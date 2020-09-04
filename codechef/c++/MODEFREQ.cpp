#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       int n,i,j;
       cin>>n;
       int a[n];
       int b[10]={0};
       for(i=0;i<n;i++) 
       {
         cin>>a[i];
         b[a[i]-1]++;
       }
       int c[100000]={0};
       for(i=0;i<10;i++)
       {
         if(b[i]!=0)
         c[b[i]-1]++;
       }
       int m=-1; int p;
       for(i=0;i<100000;i++)
       {
         if(c[i]>m)
         {
           m=c[i];
           p=i;
         }
       }
       cout<<p+1<<"\n";

    }
                      
 
        
  return 0;
}
                
            
        

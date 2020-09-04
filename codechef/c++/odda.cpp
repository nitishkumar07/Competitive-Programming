#include<iostream>
using namespace std;
int main()
{
    int t,n,i,a[100000],max;
    cin>>t;
    while(t--)
    {int p=0;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            max=a[0];
            if(a[i]%2==0)
            {
                if(a[i]>max)
                max=a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            while(max%2==0)
            {
                if(a[i]==max)
                {
                    a[i]=a[i]/2;
                    max=max/2;
                  p++; 
                }
             }
             for(int x=0;x<n;x++)
             {
             if(a[i]%2==0)
             {
             a[i]=a[i]/2;
              p++;
             }
             }
        }  
            
         cout<<p<<"\n";
      }
      return 0;
}
            
            
         
        

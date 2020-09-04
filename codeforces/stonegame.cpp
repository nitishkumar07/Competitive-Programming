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
        int n,i,j,c;
        cin>>n;
        int a[n];
        c=0;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            while(a[i]!=0)
            {
                if(a[i]==1)
                {
                    a[i]=0;
                    c++;
                 }
                 else if(a[i]%2==0)
                 {
                    a[i]=a[i]/2;
                    c++;
                 }
                 else
                 {
                    a[i]=1;
                    c++;
                 }
              }
         }
         if(c%2==0)
         cout<<"Second\n";
         else
         cout<<"First\n";
     }
     return 0;
}
            

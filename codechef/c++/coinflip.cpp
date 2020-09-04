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
        long long int g;
        cin>>g;
        while(g--)
        {
            long long int n,i,j,q,c;
            c=0;
            cin>>i>>n>>q;
             if(n%2==0)
             c=n/2;
             else
             {
                if(i==1)
                c=n/2;
                else
                c=(n/2)+1;
             }
             if(q==1)
             cout<<c<<"\n";
             else
             cout<<n-c<<"\n";
         }
           
    }
     return 0;
 }       
                    
            

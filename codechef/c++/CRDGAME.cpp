#include<bits/stdc++.h>
using namespace std;
int sum(int a)
{
    int rem,s=0;
    while(a)
    {
        rem=a%10;
        a=a/10;
        s=s+rem;
     }
     return s;
  }   
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,a,b,i,x=0,y=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a>9)
            a=sum(a);
            if(b>9)
            b=sum(b);
            
            if(a>b)
            x++;
            else if(a<b)
            y++;
            else if(a==b)
            {
                x++;y++;
             }
         }
         if(x>y)
         cout<<"0"<<" "<<x<<"\n";
         else if(x<y)
         cout<<"1"<<" "<<y<<"\n";
         else
         cout<<"2"<<" "<<x<<"\n";
     }
     return 0;
}    
        

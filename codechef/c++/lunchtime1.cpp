#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,s,i,c=0;
        cin>>n>>s;
        for(i=s;i>=0;i=i-2)
        {
            if(n==1)
            {
                c++;
                break;
            }
            else if(n/i!=0)
            {
                c=c+n/i;
                
                n=n%i;
                i=n+1;
            }
        }
        cout<<c<<"\n";
     }
  return 0;
}
                    

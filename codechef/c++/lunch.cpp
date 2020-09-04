#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,s,q,c=0;
        cin>>n>>s;
        if(n>s)
        {
            int p=n/2;
            q=s/2;
            if(n%q!=0)
            c=1;
            c=c+p/q;
            if(n%2!=0)
            c++;
         }
         else
         {
                if(n%2==0)
                c=1;
                else if(n==1)
                c=1;
                else
                {
                    c=2;
                }
        }
        cout<<c<<"\n";
     }
     return 0;
}

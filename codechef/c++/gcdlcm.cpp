#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,hcf,lcm;
        cin>>a>>b;
         hcf=gcd(b,a%b);
         lcm=(a*b)/hcf;
        cout<<hcf<<" "<<lcm<<"\n";
    }
    return 0;
}

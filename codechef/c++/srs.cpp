#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,a=0;
       cin>>n;
       a=a+n/100;
       n=n%100;
       a=a+n/50;
       n=n%50;
       a=a+n/10;
       n=n%10;
       a=a+n/5;
       n=n%5;
       a=a+n/2;
       n=n%2;
       a=a+n/1;
       n=n%1;
       cout<<a<<"\n";
    }
    return 0;
}       
        
          

/*project euler #5 no which is divisible by 1 to 20*/
#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull int gcd(ull int a,ull int b)
{
    int temp;
    if(b==0)
    return a;
    return gcd(b,a%b);
}
ull int lcm(ull int a,ull int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
   unsigned int n;
    cin>>n;
    ull int r=1;
    for(int i=2;i<=n;i++)
    {
        r=lcm(r,i);
    }
    cout<<r;
    return 0;
}

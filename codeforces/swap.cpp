#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,w,x,z,sum=0;
        cin>>a>>b;
        int ao,at,bo,bt;
        ao=a%10;
        at=a/10;
        bo=b%10;
        bt=b/10;
        sum=a+b;
        w=(at*10+bt)+(ao*10+bo);
        if(sum<=w)
        sum=w;
        x=(at*10+bo)+(bt*10+ao);
        if(sum<=x)
        sum=x;
        z=(bo*10+ao)+(bt*10+at);
        if(sum<=z)
        sum=z;
        cout<<sum<<"\n";
    }
    return 0;
}
    

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,r,i,s,add,rem=0,d=0;
    cin>>t;
    while(t--)
    {
        add=0;
        cin>>s>>n>>k>>r;
        for(i=1;i<=n;i++)
        {
           add=add+k;
           k=k*r;
        }
        if(s>=add)
        {
            rem=rem+(s-add);
            cout<<"POSSIBLE "<<s-add<<"\n";
        }
        else
        {
            cout<<"IMPOSSIBLE "<<add-s<<"\n";
            d=d+(add-s);
        }
    }
    if(rem>=d)
    cout<<"POSSIBLE"<<"\n";
    else
    cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}

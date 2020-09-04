#include<iostream>
#include <boost/math/common_factor.hpp> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,l,c;
        c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=n-1;i>0;i--)
        {
            l=lcm(a[i],a[i-1]);
            if(a[i]!=l)
            c++;
            a[i]=l;a[i-1]=l;
        }
    cout<<c<<"\n";
    }
    return 0;
}

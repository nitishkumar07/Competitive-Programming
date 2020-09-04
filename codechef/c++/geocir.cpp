#include<iostream>
using namespace std;
int main()
{
    int t,n,a[1000000],b[1000000],i,add;
    cin>>t;
    while(t--)
    {
        add=0;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>b[n-1-i])
            add=add+b[n-1-i];
            else
            add=add+a[i];
        }
        cout<<add<<"\n";
    }
    return 0;
}
        
        

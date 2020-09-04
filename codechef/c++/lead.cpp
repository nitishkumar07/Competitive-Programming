#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        cin>>a[i]>>b[i];
        else
        {
            cin>>a[i]>>b[i];
            a[i]=a[i]+a[i-1];
            b[i]=b[i]+b[i-1];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[i])
        {
            if(c<a[i]-b[i])
            c=a[i]-b[i];
        }
        else
        {
            if(d<b[i]-a[i])
            d=b[i]-a[i];
        }
    }
    if(c>d)
    cout<<"1"<<" "<<c<<"\n";
    else
    cout<<"2"<<" "<<d<<"\n";
    return 0;
}
    

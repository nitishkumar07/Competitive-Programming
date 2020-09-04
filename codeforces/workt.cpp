#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[5],i,p,add;
        for(i=0;i<5;i++)
        cin>>a[i];
        cin>>p;
        add=0;
        for(i=0;i<5;i++)
        {
            add=add+a[i];
        }
        add=add*p;
        if(add<=120)
        cout<<"No"<<"\n";
        else
        cout<<"Yes"<<"\n";
    }
    return 0;
}

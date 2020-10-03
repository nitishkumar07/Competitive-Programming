#include<iostream>

using namespace std;

int main()
{
    int t,u,c;
    cin>>t;
    for(u=0;u<t;u++)
    {
        c=0;
        int n,max,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            c++;
         }
        cout<<"Case #"<<u+1<<": "<<c<<"\n";
    }
    return 0;
}

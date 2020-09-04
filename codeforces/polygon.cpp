#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,c;
        cin>>n;
        int x[n],y[n];
        c=n;
        for(i=0;i<n;i++)
        cin>>x[i]>>y[i];
            while(n>5)
            {
                n=n/2;
                c=c+n;
            }
        cout<<c<<"\n";
    }
    return 0;
}

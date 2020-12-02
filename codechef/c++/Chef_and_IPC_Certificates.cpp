#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long int n,m,k;
    cin>>n>>m>>k;
    long int c=0;
    while(n--)
    {
        long int q,i,a;
        a=0;
        for(i=0;i<k;i++)
        {
            long int t;
            cin>>t;
            a=a+t;
        }
        cin>>q;
        if(a>=m && q<=10)
        c++;

    }
    cout<<c;
    return 0;
}
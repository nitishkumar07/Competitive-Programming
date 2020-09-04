#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,i,c,r;
        cin>>a>>b;
        if(a<9)
        c=1;
        else if(a%9==0)
        c=a/9;
        else
        c=(a/9)+1;
        if(b<9)
        r=1;
        else if(b%9==0)
        r=b/9;
        else
        r=(b/9)+1;
        if(c>=r)
        cout<<"1"<<" "<<r<<"\n";
        else
        cout<<"0"<<" "<<c<<"\n";
    }
    return 0;
}

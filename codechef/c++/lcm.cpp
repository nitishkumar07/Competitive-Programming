#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,x,y;
        cin>>l>>r;
        if(r<2*l)
        cout<<"-1"<<" "<<"-1"<<"\n";
        else
        cout<<l<<" "<<2*l<<"\n";
    }
    return 0;
}
    

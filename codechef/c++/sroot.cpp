#include<iostream>
using namespace std;
int main()
{
    int t,a,sq,i;
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(i=0;i*i<=a;i++);
        i--;
        cout<<i<<"\n";
    }
    return 0;
}
    

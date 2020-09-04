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
        int i,j,h,p;
        cin>>h>>p;
        i=1;
        while(h>0 && p>0)
        {
            h=h-p;
            p=p/2;
        }
        if(h<=0)
        cout<<"1\n";
        else
        cout<<"0\n";
      }
    return 0;
}
            

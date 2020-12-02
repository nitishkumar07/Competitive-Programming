#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long int t;
    cin>>t;
    while(t--)
    {
       int x,y;
       cin>>x>>y;
       if(x==y)
       cout<<x+y<<"\n";
       else
       {
           cout<<max(x,y)*2-1<<"\n";
       }
       
    }
    return 0;
}
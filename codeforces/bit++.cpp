#include<iostream>
using namespace std;
int main()
{
    int t,x,i;
    x=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="--X")
        {
            --x;
        }
        else if(s=="++X")
        ++x;
        else if(s=="X--")
        x--;
        else if(s=="X++")
        x++;
     }
     cout<<x;
}
     
    

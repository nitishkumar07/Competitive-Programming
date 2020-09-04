#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        string str;
        char a,b;
        cin>>str;
        n=str.length();
        a=str[0];
        b=str[n-1];
        if(n>10)
        {
            cout<<a<<n-2<<b<<"\n";
        }
        else
        {
            cout<<str<<"\n";
        }
    }
    return 0;
}

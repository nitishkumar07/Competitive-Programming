#include<iostream>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
    string s;
    cin>>s;
    int c=0;
    for(i=0;i<t-1;i++)
    {
        if(s[i]==s[i+1])
        c++;
    }
    cout<<c;
    return 0;
}
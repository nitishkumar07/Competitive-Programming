#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,len,add=0;
        string s;
        cin>>s;
        len=s.length();
        for(i=0;i<len;i++)
        {
            if(s[i]=='x'&& s[i+1]=='y' || s[i]=='y'&& s[i+1]=='x')
            {
                add=add+1;
                i++;
            }
        }
        cout<<add<<"\n";
    }
    return 0;
}
        
        
        

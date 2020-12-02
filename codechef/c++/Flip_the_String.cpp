#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str;
        cin>>s>>str;
        int i;
        int len=s.length();
        int c=0;
        if(s==str)
        cout<<"0\n";
        else
        {
            for(i=0;i<len;i++)
            {
                if(s[i]!=str[i])
                {
                    int x=i;
                    while(x<len && s[x]!=str[x])
                    {
                        s[x]=str[x];
                        x=x+2;
                    }
                    c++;
                }
            }
            cout<<c<<"\n";
        }
        

    }
    return 0;
}
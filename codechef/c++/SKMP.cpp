#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long int i,j;
        std::string str,s;
        cin>>str;
        cin>>s;
        char c;
       for(i=1;i<s.length();i++)
       {
            for(j=0;j<str.length();j++)
            {
                if(s[i]==str[j])
                {
                    str.erase(j,1);
                    break;
                }
             }
       }
       sort(str.begin(),str.end());
       c=s[0];
       for(i=0;i<str.length();i++)
       {
            if(str[i]==c && str[i+1]!=str[i])
            {
                cout<<s;
            }
            else
            cout<<str[i];
       }
       cout<<"\n";
    }
    return 0;
}

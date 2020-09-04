#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,c;
        bool test=true;
        cin>>n;
        int a[26]={0};
        c=n;
        while(n--)
        {
            string s;
            cin>>s;
            for(i=0;i<s.length();i++)
            {
                a[s[i]-'a']++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(a[i]%c!=0)
            {
              test=false;
              break;
            }
        }
        if(test)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}  
        
            
            

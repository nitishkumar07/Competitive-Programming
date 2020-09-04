#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    string s;
    cin>>t;
    while(t--)
    {
        getline(cin,s);
        
        while(s.length()==0)
        getline(cin,s);
    for(i=0;s[i]!='\0';i++)
        {
                if(s[i]==' ')
                continue;
                else if(s[i]=='X')
                s[i]='A';
                else if(s[i]=='Y')
                s[i]='B';
                else if(s[i]=='Z')
                s[i]='C';
               else
               s[i]=s[i]+3;
           
        }
        cout<<s<<endl;
     }
   return 0;
}
              
            

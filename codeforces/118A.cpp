#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s,str;
    cin>>s;
    i=0;j=0;
    transform(s.begin() , s.end() , s.begin() , :: tolower);
 for(i=0;i<s.length();i++)
 {
    
    /*if(s[i]>=65 && s[i]<=90)
    {
        s[i]=97+s[i]-65;
    }*/
 
 if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i')
    cout<<"."<<s[i];
 }
     return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n,i,c=0,d=0,e=0;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='I')
            c++;
            else if(s[i]=='N')
            d++;
            else if(s[i]=='Y')
            e++;
        }
        if(c!=0)
        cout<<"INDIAN"<<"\n";
        else if(e!=0)
        cout<<"NOT INDIAN"<<"\n";
        else
        cout<<"NOT SURE"<<"\n";
    }
    return 0;
}

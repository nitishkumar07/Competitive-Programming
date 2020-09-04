#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    while(w--)
    {
        string s;
        cin>>s;
        int r=0;int n=s.length();
        for(int i=0;i<n;i++)
        {
           if(s[i]!=s[i+1])
            r++;
        }
        if(r==n)
        cout<<"0"<<"\n";
    }
    return 0;
}
                
                    

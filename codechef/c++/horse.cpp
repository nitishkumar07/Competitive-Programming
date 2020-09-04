#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,i,p,diff;
        cin>>n;
       long int s[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
        p=sizeof(s)/sizeof(s[0]);
        sort(s,s+p);
        for(i=0;i<n;i++)
        {
          if(i==0)
          {
            diff=(s[i+1]-s[i]);
          }
          else
          {
          if(diff > (s[i+1]-s[i]))
          {
            diff=(s[i+1]-s[i]);
          }
          }
        }
        cout<<diff<<"\n";
    }
    return 0;
} 
        

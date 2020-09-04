#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,intial=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>k)
            {
               intial=intial+a[i]-k;
            }
        }
      cout<<intial<<"\n";
    } 
  return 0;
} 

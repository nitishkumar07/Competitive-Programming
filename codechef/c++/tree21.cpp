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
       long int n,i,c;
       c=0;
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n,greater<int>());
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            continue;
            if(a[i]==a[i+1])
            continue;
            else
            c++;
         }
         cout<<c<<"\n";
     }
     return 0;
}
        

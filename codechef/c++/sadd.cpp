#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,sum=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        sum=sum+a[0]+a[1];
        cout<<sum<<"\n";
     }
     return 0;
}
        

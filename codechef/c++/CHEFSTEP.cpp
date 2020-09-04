#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int a[n],ans[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]%k==0)
            ans[i]=1;
            else
            ans[i]=0;
       }
       for(i=0;i<n;i++)
       cout<<ans[i];
       cout<<"\n";
    }
    return 0;
}
        

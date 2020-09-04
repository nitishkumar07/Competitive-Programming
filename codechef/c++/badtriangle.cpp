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
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        if(a[0]+a[1]<=a[n-1])
        cout<<"1 "<<"2 "<<n<<"\n";
        else
        cout<<"-1\n";
    }
    return 0;
}

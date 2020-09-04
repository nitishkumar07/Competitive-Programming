#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,c=0;
        cin>>n;
        long long int a[n];
        cin>>a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            c=c+(fabs(a[i]-a[i-1]))-1;
        }
        cout<<c<<"\n";
    }
    return 0;
}

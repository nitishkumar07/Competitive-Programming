#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,k,b,p;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        cin>>k;
        b=a[k-1];
        p=sizeof(a)/sizeof(a[0]);
        sort(a,a+p);
        for(i=0;i<n;i++)
        {
            if(b==a[i])
            {
                cout<<i+1<<"\n";
                break;
            }
            
        }
    }
    return 0;
}

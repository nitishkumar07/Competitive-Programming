#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        j=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
            sort(a,a+n);
        for(i=0;i<n-1;i++)
       {
            if(fabs(a[i+1]-a[i])>1)
            {
                cout<<"NO\n";
                j=1;
                break;    
            }
       }
       if(j==0)
       cout<<"YES\n";
   }
    return 0;
}
                
        

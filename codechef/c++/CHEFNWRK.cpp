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
        int n,k,i,sum,c;
        bool j=true;
        c=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i--)
        {
            sum=0;
            if(a[i]>k)
            {
                j=false;
                cout<<"-1"<<"\n";
                break;
            }
            else
            {
              while(sum<=k && i<=n)
              {
                    sum=sum+a[i];
                    i++;
              }
              c++;
            }
          }
          if(j==true)
        cout<<c<<"\n";
     }
   return 0;
}

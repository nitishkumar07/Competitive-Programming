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
        bool ans=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            ans=!ans;
            else
            {
                ans=!ans;
                break;
             }
        }
        if(ans)
        cout<<"First"<<"\n";
        else
        cout<<"Second"<<"\n";
   }
   return 0;
}
            

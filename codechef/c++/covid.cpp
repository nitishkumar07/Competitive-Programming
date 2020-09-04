#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
       int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;)
        {
            if(a[i]==1)
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[j]==1)
                    {
                        if((j-i)<6)
                        {
                            cout<<"NO"<<"\n";
                            exit(0);
                        }
                        else if((j-i)>=6)
                        {
                            i=j;
                            break;
                        }
                     }
                 }
             }
         }
         cout<<"YES"<<"\n";
     }
    return 0;
}

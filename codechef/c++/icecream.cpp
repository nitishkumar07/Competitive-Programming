#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
            int five=0,ten=0;
            for(i=0;i<n;i++)
            {
                if(a[0]!=5)
                {
                    five=-1;
                    break;
                 }
                else if(five>=0 && ten>=0)
                { 
                    if(a[i]==5)
                    five++;
                    else if(a[i]==10)
                    {
                        ten++;
                        five--;
                    }
                    else if(a[i]==15)
                    {
                        if(ten>=1)
                        ten--;
                        else
                        five=five-2;
                 }
                 else
                 break;
            }
         }
            if(five<0 || ten<0)
            cout<<"NO\n";
            else
            cout<<"YES\n";
     }
     return 0;
}
        
                

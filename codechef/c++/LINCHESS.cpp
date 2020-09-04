#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,min,p,c;
        cin>>n>>k;
        long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        min=100000000000;p=0;
        for(i=0;i<n;i++)
        {
            c=0;
            if(k%a[i]==0)
            {
                c=k/a[i];
                if(min>c)
                {
                    p=a[i];
                    min=c;
                }
            }
            else
            {
                continue;
            }
        }
        if(p!=0)
        cout<<p<<"\n";
        else
        cout<<"-1\n";
   }
   return 0;
}                

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,b[n];
        for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        }
        if(n==1)
        {
            cout<<a[0]<<"\n";
            continue;
        }
        sort(b,b+n);
        int copy=0;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(b[i]==b[i+1])
            {
                copy=b[i];
                continue;
            }
            else
            {
                if(b[i]==copy)
                continue;
                else
                {
                   c=b[i];
                   break; 
                }
                
            }
        }
        if(c==0)
        {
            cout<<"-1\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(c==a[i])
            {
                cout<<i+1<<"\n";
                break;
            }
        }
    }
    return 0;
}
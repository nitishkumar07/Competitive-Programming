#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long int n,k,l,i;
        float x;
        cin>>n>>k>>l;
        x=n/(float)k;
        if(k==1 && n>1 )
        {
            cout<<"-1\n";
        }
        else if(x>l)
        {
            cout<<"-1\n";
        }
        else
        {
            int p;
            p=1;
            for(i=0;i<n;i++)
            {
                if(p<=k)
                {
                    cout<<p<<" ";
                    p++;
                }
                else
                {
                   p=1;
                   cout<<p<<" ";
                  p++;
                }
            }
            cout<<"\n";
        }
        
     }
     return 0;
} 

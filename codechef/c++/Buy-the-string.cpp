#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        int sum=0;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(c0>c1)
                {
                    if(c0>c1+h)
                    sum=sum+c1+h;
                    else
                    {
                        sum=sum+c0;
                    }
                }
                else
                {
                    sum=sum+c0;
                }
                
            }
            else if(s[i]=='1')
            {
                if(c1>c0)
                {
                    if(c1>c0+h)
                    sum=sum+c0+h;
                    else
                    {
                        sum=sum+c1;
                    }
                    
                }
                else
                {
                    sum=sum+c1;
                }
                
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
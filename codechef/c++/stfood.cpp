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
        long int n,c;
        cin>>n;
        long int s[n],p[n],v[n];
        for(long int i=0;i<n;i++)
        cin>>s[i]>>p[i]>>v[i];
        long int max=0;
        for(long int i=0;i<n;i++)
        {
            c=0;
            c=(p[i]/(s[i]+1))*v[i];
            if(max<c)
            max=c;
        }
       cout<<max<<"\n";
    }
    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,u;
    cin>>t;
    for(u=0;u<t;u++)
    {
        long long int n,i,x,sum,c;
        sum=0;c=0;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        i=0;
        for(i=0;i<n;i++)
        {
            if(x>=a[i])
            {
                x=x-a[i];
                c++;
            }
        }
        
        cout<<"Case #"<<u+1<<": "<<c<<"\n";
    }
    return 0;
}
            
        

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int i,n,p1,p2;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n,greater<int>());
        p1=0;
        p2=0;
        for(i=0;i<n;i++)
        {
            if(i==0)
            p1=p1+a[i];
            else if(i==1 || i==2)
            p2=p2+a[i];
            else if(i%2!=0)
            p1=p1+a[i];
            else if(i%2==0)
            p2=p2+a[i];
        }
        if(p1>p2)
        cout<<"first\n";
        else if(p2>p1)
        cout<<"second\n";
        else if(p1==p2)
        cout<<"draw\n";
    }
    return 0;
}

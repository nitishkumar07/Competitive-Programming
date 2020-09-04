#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        int max=a[0];int c[n],k=0;
        int d[n]={0};int p=0;
        c[0]=a[0];
        for(i=0;i<n;i++)
        {
            if(max!=a[i])
            {
                k++;
                c[k]=a[i];
                max=a[i];
                p++;
                d[p]=1;
            }
            else
            {
                d[p]=d[p]+1;
            }
        }
        if(check(c,k)==1 && check(d,p)==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}
                
               

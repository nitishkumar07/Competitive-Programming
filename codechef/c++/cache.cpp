#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,m,i,q,j,p=0,c=0;
        cin>>n>>b>>m;
        int a[m];
        for(i=0;i<m;i++)
        cin>>a[i];
        q=n/b;
        if(n%b!=0)
        q=q+1;
        for(i=0;i<m;i++)
        {
            for(j=1;j<=q;j++)
            {
                if(a[i]>=(j-1)*b && a[i]<j*b)
                {
                    if(p==j)
                    break;
                    else
                    {
                        c++;
                        p=j;
                        break;
                    }
                }
             }
        }
        cout<<c<<"\n";
    }
    return 0;
}
        

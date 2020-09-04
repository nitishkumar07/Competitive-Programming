#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,c;
        cin>>n>>m;
        char a[n][m];
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>a[i][j];
         }
         for(i=0;i<m-1;i++)
         if(a[n-1][i]=='D')
         c++;
         for(i=0;i<n-1;i++)
         if(a[i][m-1]=='R')
         c++;
         cout<<c<<"\n";
     }
     return 0;
}

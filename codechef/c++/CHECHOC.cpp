#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,j,i,d,sum=0;
       cin>>n>>m>>x>>y;
       int a[n][m];
       d=y-x;
       for(i=0;i<n;i++)
       {
            for(j=0;j<m;j++)
            {
                if(i%2==0)
                {
                   if(j%2==0)
                   {
                        a[i][j]=x;
                        sum=sum+x;
                   }
                   else
                   {
                        a[i][j]=d;
                        sum=sum+d;
                   }
                }
                else
                {
                    if(j%2==0)
                    {
                    a[i][j]=d;
                    sum=sum+d;
                    }
                    else
                    {
                    a[i][j]=x;
                    sum=sum+x;
                   }
                }
            }
        }
     
        cout<<sum<<"\n";
    }
   return 0;
}

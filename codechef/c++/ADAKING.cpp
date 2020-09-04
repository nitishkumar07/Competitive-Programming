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
        int k,i,j,p,q;
        string s[8][9];
        cin>>k;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            s[i][j]="X";
        }
        if(k/8>0)
        {
            p=k/8;
            q=k%8;
            for(i=7;i>7-p;i--)
            {
                for(j=0;j<8;j++)
                s[i][j]=".";
            }
            i=7-p;
            for(j=7;j>7-q;j--)
            s[i][j]=".";
            s[7][7]="O";
         }
         
        else
        {
           i=7;
           for(j=7;j>7-k;j--)
           s[i][j]=".";
           s[7][7]="O";
        }
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            cout<<s[i][j];
            cout<<"\n";
        }
   }
   return 0;
}
        

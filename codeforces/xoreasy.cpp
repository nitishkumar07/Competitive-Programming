#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>0;j--)
        {
            if(j>i)
            cout<<" ";
            else
            cout<<"#";
        }
        cout<<" ";
        for(int k=0;k<i;k++)
        cout<<"#";
        cout<<"\n";
      }
      return 0;
 }

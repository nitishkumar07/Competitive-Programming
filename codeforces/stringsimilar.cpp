#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        string a,b;
        cin>>a;
        int k=0;
        char c;
        for(i=0;i<=n-1;i++)
        {
            j=i;
            c=a[j+k];
            k++;
            cout<<c;
        }
        cout<<"\n";
     }
     return 0;
}

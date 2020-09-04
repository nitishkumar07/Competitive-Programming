#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p;
    p=0;
    cin>>t;
    while(t--)
    {
        int a[3],i,c;
        for(i=0;i<3;i++)
        cin>>a[i];
        c=0;
        for(i=0;i<3;i++)
        {
            if(a[i]==1)
            c++;
        }
        if(c>=2)
        p++;
    }
    cout<<p;
}

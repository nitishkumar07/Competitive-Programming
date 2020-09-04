#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c,p;
        cin>>n;
        string a;
        cin>>a;
        p=0;
        for(i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<n;j++)
            {
                if(a[i]==a[j])
                c++;
            }
            if(c%2!=0)
            {
                p=1;
                cout<<"NO\n";
                break;
            }
        }
        if(p!=1)
        cout<<"YES\n";
    }
    return 0;
}

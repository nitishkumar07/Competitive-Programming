#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j,f;
        cin>>n;
        i=n;
        j=5;
        f=0;
        while(i>=j)
        {
            f+=i/j;
            j*=5;
        }
        cout<<f<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,j,res;
    res=0;long long int p=1;
    cin>>a>>c;
    while(a!=0 || c!=0)
    {
        long long int mid=(c%3-a%3 + 3)%3;
        res=res+(p*mid);
        p=p*3;
        a=a/3;c=c/3;
    }
    cout<<res;
    return 0;
}

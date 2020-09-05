/*Codeforces Round #667 (Div. 3) problem1*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,i,diff,c;
        cin>>a>>b;
        diff = a>b? a-b : b-a;
        if(diff==0)
        cout<<"0\n";
        else if(diff>10)
        {
            c=diff/10;
            if(diff%10!=0)
            c=c+1;
            cout<<c<<"\n";
        }
        else if(diff<=10 && diff!=0)
        cout<<"1\n";
    }
   return 0;
}

#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,d0,d1,s,c,sum,left,i;
        sum=0;
        cin>>k>>d0>>d1;
        s=(d0 + d1);
        int d2=(d0+d1)%10;
        if(k==2)
        {
            if(s%3==0)
            cout<<"YES\n";
            else
            cout<<"NO\n";
         }
         
         else
       {
        c=(2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;
        long long int cycle = (k-3)/4;
        sum=sum + s + d2 +(c*cycle);
        left=(k-3)%4;
        for(i=0;i<left;i++)
        {
            if(i==0)
            sum=sum+((2*s)%10);
            else if(i==1)
            sum=sum+((4*s)%10);
            else if(i==2)
            sum=sum+((8*s)%10);
        }
        if(sum%3==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
      }
    }
    return 0;
}

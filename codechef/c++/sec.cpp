#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t,n,l,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>b)
        {
           if(a>c)
           l=a;
           else
           l=c;
           }
           else
           {
            if(b>c)
            l=b;
            else
            l=c;
            }
            if(a<b)
            {
                if(a<c)
                s=a;
                else
                s=c;
            }
            else
            {
                if(b<c)
                s=b;
                else
                s=c;
            }
            n=(a+b+c)-(l+s);
            cout<<n<<"\n";
        }
        return 0;
}

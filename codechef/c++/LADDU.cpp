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
        int n,m,sum;
        sum=0;
        string s;
        cin>>n>>s;
        if(s=="INDIAN")
        m=200;
        else
        m=400;
        while(n--)
        {
            string str;
            cin>>str;
            if(str=="CONTEST_WON")
            {
                int r;
                cin>>r;
                if(r<20)
                sum=sum+300+(20-r);
                else
                sum=sum+300;
           }
           else if(str=="TOP_CONTRIBUTOR")
           {
                sum=sum+300;
           }
           else if(str=="BUG_FOUND")
           {
                int p;
                cin>>p;
                sum=sum+p;
           }
           else if(str=="CONTEST_HOSTED")
           sum=sum+50;
       }
       cout<<sum/m<<"\n";
   }
   return 0;
}

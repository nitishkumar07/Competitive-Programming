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
        int n,i,sum;
        sum=0;
        string s;
        cin>>s;
        n=s.length();
        int b[100]={0};
        int k=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            b[k]++;
            else if(s[i]=='0')
            k++;
        }
        int j;
        j=sizeof(b)/sizeof(b[0]);
        sort(b, b+j, greater<int>());
         //sum=sum+b[0];
        for(i=0;i<j;i++)
        {
            if(b[i]==0)
            break;
            else
            {
                if(i%2==0)
                sum=sum+b[i];
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}

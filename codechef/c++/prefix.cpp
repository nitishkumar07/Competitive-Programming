#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,max=0;
        string s,str;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(max<=a[i])
            max=a[i];
        }
        char c;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                if(a[i-1]!=0)
                {
                    str="becool";
                    cout<<str<<"\n";
                 }
                
               else if(a[i-1]==0)
               {
                reverse(str.begin(), str.end());
                    cout<<str<<"\n";
               }
               if(i==(n-1))
               cout<<"igotit"<<"\n";
           }
            else if(a[i]!=max)
            {
                for(c='a';c<='z';c++)
                {
                    if(a[i]==0)
                    break;
                    else
                    {
                        cout<<c;
                        a[i]--;
                    }
                }
                cout<<"\n";
            }
            else if(a[i]==max)
            {
                for(c='a';c<='z';c++)
                {
                    if(a[i]==0)
                    {
                        cout<<s<<"\n"<<s;
                        break;
                    }
                    else
                    {
                        s=s+c;
                        a[i]--;
                    }
                }
                cout<<"\n";
            }
            
     }
  }
  return 0;
}

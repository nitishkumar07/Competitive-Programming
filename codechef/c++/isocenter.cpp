#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
             int n,q,p,i,j;
            cin>>n>>q;
        string a,b,c;
            for(i=0;i<n;i++)
            getline(cin,a);
        for(i=0;a[i]!='\0';i++)
            c.push_back(a[i]);
            c[i]='\0';
        while(q--)
        {
            cin>>p;
            for(i=0;c[i]!='\0';i++)
            a.push_back(c[i]);
            a[i]='\0';
            int len;
          while(p--)
          {
                  b.clear();
                int k=-1;
                for(i=0;a[i]!='\0';i++)
                {
                    for(j=i+1;a[j]!='\0';j++)
                    {
                        if(a[i]==a[j])
                        {
                            b.push_back(a[i]);
                            break;
                        }
                    }
                }
                len=b.length();
                a.clear();
                for(i=0;i<len;i++)
                a.push_back(b[i]);
                a[i]='\0';
           }
           len=b.length();
           cout<<len<<"\n";
        }
    }
    return 0;
} 
    
    
                        
                        

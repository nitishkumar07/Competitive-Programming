#include<iostream>
#include<algorithm>
#include<deque>
#include<queue>
#include<math.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long int i,j,c,sheet;
        i=0;
        j=0;
        sheet=0;
        c=0;
        while(i<n && j<n)
        {
            if(s[i]=='M')
            {
                if(s[j]=='I')
                {
                    if(i>j)
                    {
                        for(int a=j+1;a<i;a++)
                        {
                            if(s[a]==':')
                            sheet++;
                        }
                    }
                    else
                    {
                        for(int a=i+1;a<j;a++)
                        {
                            if(s[a]==':')
                            sheet++;
                        }
                    }
                    if((k+1-fabs(i-j)-sheet)>0)
                    {
                        c++;i++;j++;
                        sheet=0;
                    }
                    else
                    {
                        if(i<j)
                        {
                            i++;sheet=0;
                        }
                        else
                        {
                            j++;sheet=0;
                        }
                        
                    }
                    
                }
                else if(s[j]=='X')
                {
                    i=j;i++;j++;
                }
                else
                {
                    j++;
                }
                
            }
            else if(s[i]=='X')
            {
                j=i;i++;j++;
            }
            else
            {
                i++;
            }
            
        }
        cout<<c<<"\n";
    }
    return 0;
}
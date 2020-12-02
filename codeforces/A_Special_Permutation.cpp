#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        for(i=1;i<=n;i++)
        {
            if(i==n)
            cout<<"1 ";
            else
            {
                cout<<i+1<<" ";
            }

            
        }
        cout<<"\n";
    }
}
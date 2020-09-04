#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=1,i;
        cin>>n;
        int x[n];
        vector<int> a;
        for( i=0;i<n;i++)
        cin>>x[i];
        for(i=0;i<n;i++)
        {
            if(i==n-1)
            {
                a.push_back(count);
            }
            else if(x[i+1]-x[i]<=2)
            {
                count++;
             }
             else
             {
                a.push_back(count);
                count=1;
             }
        }
        sort(a.begin(),a.end());
        cout<<a.front()<<" "<<a.back()<<"\n";
    }
    return 0;
}
                      
        

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
	    long long int n,i,j;
	    int c=0;int min;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    min=a[0];
	    for(i=0;i<n;i++)
	    {
	        if(min>=a[i])
	        {
	        c++;
	        min=a[i];
	        }
	        
	        
	    }
	    cout<<c<<"\n";
	}
	
	    
	return 0;
}

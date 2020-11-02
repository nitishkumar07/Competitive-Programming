#include<iostream>

using namespace std;

int main()
{
	long long t;
	cin>>t;
	for(int u=1;u<=t;u++)
	{
		long long int n,i,j;
		cin>>n;
		long long int a[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				cin>>a[i][j];
		}
		long long int max=0;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				long long int c=0;
				for(int k=0;k+i<n && k+j<n;k++)
				{
					c=c+a[k+i][k+j];
				}
				if(max<c)
					max=c;
			}
		}
		cout<<"Case #"<<u<<": "<<max<<"\n";
	}
	return 0;
}

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		int a[n],b[n],i,k;
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
		{
			k=n-b[i]+2;
			a[i]=k;
		}
		for(i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<"\n";
	}
	return 0;
}

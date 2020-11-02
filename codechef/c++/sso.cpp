#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		unsigned long long int a[n],i;
		for(i=0;i<n;i++)
			cin>>a[i];
		unsigned long long int sum=0,temp=0,c;
		for(i=0;i<n;i++)
		{
			temp=temp|a[i];
			sum=sum+a[i];
		}
		c=sum|temp;

		cout<<c<<"\n";
	}
	return 0;
}

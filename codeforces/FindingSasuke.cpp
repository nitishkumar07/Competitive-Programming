#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		reverse(b,b+n);
		for(i=0;i<n;i++)
		{
			if(i<n/2)
				cout<<-b[i]<<" ";
			else
				cout<<b[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

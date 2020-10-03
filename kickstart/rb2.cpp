#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t,u;
	cin>>t;
	for(u=0;u<t;u++)
	{
		long long int n,d,i;
		cin>>n>>d;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=n-1;i>=0;i--)
		{
			if(d%a[i]==0)
				continue;
			else
				d=(d/a[i])*a[i];
		}
		cout<<"Case #"<<u+1<<": "<<d<<"\n";
	}
	return 0;
}

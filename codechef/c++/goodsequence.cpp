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
		long long int n,q,i;
		cin>>n>>q;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		while(q--)
		{
			long long int x,y,c;
			c=0;
			cin>>x>>y;
			a[x-1]=y;
			for(i=0;i<n;i++)
			{
				if(a[i]!=a[i+1])
					c++;
			}
			cout<<c<<"\n";
		}
	}
	return 0;
}



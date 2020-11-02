#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,i,c;
		long long int ans=0,l=0;
		cin>>n>>k;
		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			c=a[i]+l;
			l=c-k;
			if(c<k)
			{
				ans=i+1;
				break;
			}
		}
		if(l>=0)
		{
			long long int p;
			p=l/k;
			ans=n+p+1;
		}
		cout<<ans<<"\n";
	}
	return 0;
	}

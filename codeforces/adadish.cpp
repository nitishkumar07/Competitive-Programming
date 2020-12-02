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
		int a[n],i;
		for(i=0;i<n;i++)
			cin>>a[i];
		if(n==1)
		{
			cout<<a[0]<<"\n";
		}
		else if(n==2)
		{
			cout<<max(a[0],a[1])<<"\n";
		}
		else
		{
			sort(a,a+n,greater<int>());
			int sum1=a[0];int sum2=a[1];
			for(i=2;i<n;i++)
			{
				if(sum1>sum2)
			{
				sum2=sum2+a[i];
			}
			else
				sum1=sum1+a[i];
			}
			if(sum1>sum2)
				cout<<sum1<<"\n";
			else
				cout<<sum2<<"\n";
		}
	}
	return 0;
}

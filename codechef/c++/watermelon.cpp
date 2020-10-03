#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,c,sum;
		sum=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum<0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}

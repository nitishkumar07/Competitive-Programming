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
		float k;
		float sum=0;
		cin>>n>>k;
		int a[n];
		int i,j;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				sum=sum+a[j]/(j+1);
			}
		}
		if(sum==k)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

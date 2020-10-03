#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,c;
		c=0;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int f=a[0];
		for(i=1;i<n;i++)
		{
			while(a[i]+f<=k)
			{
				a[i]=f+a[i];
				c++;
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}


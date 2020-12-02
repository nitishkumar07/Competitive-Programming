#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,i;
		bool test=true;
		cin>>n>>x;
		int a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for(i=0;i<n;i++)
		{
			if(a[i]+b[i]>x)
			{
				cout<<"No\n";
				test=false;
				break;
			}
		}
		if(test)
			cout<<"Yes\n";
	}
	return 0;
}


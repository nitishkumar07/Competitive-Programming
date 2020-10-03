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
		bool test=true;
		int n,i,j;
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
			a[i]=i+1;
		for(i=0;i<n;i++)
			cin>>b[i];
		for(i=0;i<n;i++)
		{
			if(a[i]==b[i])
				continue;
			else
			{
				if(a[i]%b[i]==0)
					continue;
				else
				{
					cout<<"NO\n";
					test=false;
						break;
				}
			}
		}
		if(test)
			cout<<"YES\n";
	}
	return 0;
}


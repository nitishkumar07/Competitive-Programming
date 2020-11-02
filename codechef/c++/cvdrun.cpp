#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		bool test=true;
		if(y>n)
		{
			cout<<"NO\n";
			continue;
		}
		for(int i=1;i<=n;i++)
		{
			if((x+k*i)%n==y)
			{
				cout<<"YES\n";
				test=false;
				break;
			}
		}
		if(test)
			cout<<"NO\n";
	}
		
	return 0;
}



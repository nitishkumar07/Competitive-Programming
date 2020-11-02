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
		long long int a,b,x;
		cin>>x;
		if(x%2==0)
		{
			a=b=x/2;
		}
		else
		{
			a=x/2;
			b=x-a;
		}
		cout<<a<<" "<<b<<"\n";
	}
	return 0;
}


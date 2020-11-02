#include<iostream>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int c;
		c=a^b;
		cout<<c<<"\n";
	}
	return 0;
}

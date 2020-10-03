#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,i;
		cin>>n>>x;
		if(n<=2)
		{
			cout<<"1\n";
		}
		else
		{
			n=n-2;
			i=1;
			while(n>0)
			{
				n=n-x;
				i++;
			}
			cout<<i<<"\n";
		}
	}
	return 0;
}

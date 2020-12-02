#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int p,q,x;
		cin>>p>>q;
		x=p;
		while(x>0)
		{
			if(p%x==0)
			{
				if(x%q!=0)
				{
					cout<<x<<"\n";
					break;
				}
			}
			x=x-2;
		}
	}
	return 0;
}

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		bool test=true;
		int k=1;
		while(pow(2,k)<n)
		{
			k++;
			if(pow(2,k)==n)
			{
				test=false;
				break;
			}
		}
		if(n==1)
			cout<<"1";
		else if(n==2)
			cout<<"-1";
		else if(test==false)
			cout<<"-1";

		else
		{
			cout<<"2 3 1 ";
			long long int i=4,j=4;
			while(j<=n)
			{
				if(i==j)
				{
					cout<<j+1<<" "<<j<<" ";
					j++;
					i=i*2;
				}
				else
					cout<<j<<" ";
				j++;
			}
		}
		cout<<"\n";
	}
	return 0;
}

#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		int c=0;
		int prev=-1;
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				if(prev==-1)
					prev=i;
				else
				{
					c=c+i-prev-1;
					prev=i;
				}
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}


				

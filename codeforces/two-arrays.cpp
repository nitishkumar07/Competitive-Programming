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
		int n,T,i;
		cin>>n>>T;
		int a[n],b[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		b[n]={0};
		for(i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]+a[j]==T)
				{
					if(b[i]==0 && b[j]==0)
					{
						b[i]=1;
						b[j]=2;
					}
					else
					{
						if(b[i]==1)
						{
							b[j]=2;
						}
						else if(b[j]==1)
							b[i]=2;
					}
				}
			}
		}
		for(i=0;i<n;i++)
		cout<<b[i]<<" ";
		cout<<"\n";
	}
	return 0;
}



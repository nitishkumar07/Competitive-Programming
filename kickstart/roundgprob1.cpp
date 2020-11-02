#include<iostream>

using namespace std;

int main()
{
	long long int t,u;
	cin>>t;
	for(u=1;u<=t;u++)
	{
		string s;
		cin>>s;
		long long int l=s.length();
		long long int a[l]={0};
		int j=0;
		for(int i=0;i<l;i++)
		{
			if(s[i]=='K')
			{
				if(s[i+1]=='I' && s[i+2]=='C' && s[i+3]=='K')
				{
					a[j]=1;
					j++;
				}
			}
			if(s[i]=='S')
			{
				if(s[i+1]=='T' && s[i+2]=='A' && s[i+3]=='R' && s[i+4]=='T')
				{
					a[j]=2;
					j++;
				}
			}
		}
			int c=0;
			int n=sizeof(a)/sizeof(a[0]);
			for(int i=0;i<n;i++)
			{
				if(a[i]==0)
					break;
				if(a[i]==2)
				{
					int v;int b=i;
					for(v=0;v<i;v++)
					{
						if(a[v]==1)
							c++;
					}
				}
			}
			cout<<"Case #"<<u<<": "<<c<<"\n";
	}
	return 0;
}
		

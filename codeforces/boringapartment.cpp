#include<iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c,sum;
		c=0;sum=0;
		cin>>n;
		int l=n%10;
		int num=n;
		while(num!=0)
		{
			c++;
			num=num/10;
		}
		for(int i=1;i<l;i++)
		{
			sum=sum+10;
		}
		if(c==1)
			sum=sum+1;
		if(c==2)
			sum=sum+3;
		if(c==3)
			sum=sum+6;
		if(c==4)
			sum=sum+10;
		cout<<sum<<"\n";
	}
	return 0;
}

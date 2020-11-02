#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int len;
		cin>>len;
		string s;
		cin>>s;
		int i,c;
		c=0;
		for(i=0;i<len-1;i++)
		{
			if(s[i]==s[i+1])
				c++;
		}
		if(c%2==0)
			cout<<c/2<<"\n";
		else
			cout<<(c/2)+1<<"\n";
	}
	return 0;
}

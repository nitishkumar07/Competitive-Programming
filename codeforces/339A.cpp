#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cin>>s;
	char str[100];
	int len,i,j;
	len=s.length();
	j=0;
	for(i=0;i<len;i++)
	{
		if(s[i]!='+')
		{
			str[j]=s[i];
			j++;
		}
	}
	sort(str,str+j);
	for(i=0;i<j-1;i++)
	{
		cout<<str[i]<<"+";
	}
	cout<<str[i];
	return 0;
}

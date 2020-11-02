#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len,i;
	len=s.length();
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
			char ch=toupper(s[i]);
			cout<<ch;
		}
		else
			cout<<s[i];
	}
	return 0;
}

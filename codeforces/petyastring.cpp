#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s,s1;
	cin>>s>>s1;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	transform(s1.begin(),s1.end(),s1.begin(),::tolower);
	if(s==s1)
		cout<<"0\n";
	else if(s>s1)
		cout<<"1\n";
	else
		cout<<"-1\n";

	return 0;
}	

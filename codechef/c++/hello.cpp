#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,rem,rev;
		cin>>n;
        rev=0;
		while(n!=0)
		{
			rem=n%10;
			n=n/10;
			rev=(rev*10)+rem;
		}
		cout<<rev<<"\n";
	}
	return 0;
}
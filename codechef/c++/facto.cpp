#include <iostream>
using namespace std;

int main(void)
{
    int n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a;
        c=1;
        b=0;
    	while(a/c>0)
        	{
        		c=c*5;
        		b=b+(a/c);
        	}
        	cout<<b<<endl;
    }
        return 0;
}

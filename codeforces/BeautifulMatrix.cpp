#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int x,y,i,j;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
			{
				x=i;y=j;
			}
		}
	}
	int p=fabs(x-2);
	int q=fabs(y-2);
	cout<<p+q;
	return 0;
}

#include<stdio.h>
int main()
{
	int t,l,r,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&l,&r,&k);
		if(l==r)
		printf("1\n");
		else
		printf("%d\n",k);
	}
	return 0;
}

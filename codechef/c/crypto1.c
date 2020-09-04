
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while (t>=0)
	{
	    char arr[1000];
	    gets(arr);
	    int p;
	    p=strlen(arr);
	    for (int j=0;j<p;j++)
	    {
	        if (arr[j]>=65 && arr[j]<=87)
	            arr[j]=arr[j]+3;
	       else if (arr[j]==88)
	            arr[j]=65;
	        else if (arr[j]==89)
	            arr[j]=66;
	       else if (arr[j]==90)
	            arr[j]=67;
	    }
	    printf("%s\n",arr);
	    t--;
	}
	return 0;
}

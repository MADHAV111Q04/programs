#include<stdio.h>
int main()
{
	int n,i;
	int fact=1;
	printf("enter the integer:");
	scanf("%d",&n);
	if(n<0)
	    printf("  error! factorial of a negative number does not exist.\n");
	else
	{
		for (i=1;i<=n;++i)
		{
			fact*=i;
		}
		printf("factorial of %d=%d\n",n,fact);
	}
	return 0;
}

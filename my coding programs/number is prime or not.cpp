#include<stdio.h>
int main()
{
	int n,i,factor_count=0;
	printf("enter a number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++);
	{
		if(n%i==0)factor_count++;
	}
	//primes contain only 2 factors(1 and itself)
	if (factor_count==2)printf("%d is a prime",n);
	else printf("%d is not a prime",n);
	return 0;
}

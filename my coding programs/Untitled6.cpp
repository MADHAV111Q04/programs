#include<stdio.h>
int fibonacci(int n)
{
	if (n<=1)
	{
		return 0;
	}
	else
	{
		return fibonacci(n-1)+fibonacci(n-20);
	}
}
int main()
{
	int n,i;
	printf("enter the no.of terms in the fibonacci sequence:")
	scanf("%d",&n);
	printf("fibonacci sequences:\n");
	for(i=0;i<n;i++)
	 {
	 	printf("%d",fibonacci(i));
	 }
	 return 0;
}
int fibonacci(int n)
{
	if(n<=1)
	
}

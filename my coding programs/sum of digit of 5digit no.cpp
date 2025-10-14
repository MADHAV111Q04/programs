#include<stdio.h>
int main()
{
	int num;
	printf("enter a 5-digit number: ");
	scanf("%d",&num);
	int sum=0;
	while (num!=0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("digit sum:%d",sum);
	return 0;
}

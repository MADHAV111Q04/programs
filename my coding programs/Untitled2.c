#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("enter fahrenheit");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("celsius=%f",celsius);
	return 0;
}

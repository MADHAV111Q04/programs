#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t;
	float CI;
	printf("enter p,r,t");
	scanf("%f%f%f",&p,&r,&t);
	CI=p*pow(1+r/100,t)-1;
	printf("\ncompound interest CI=%f",CI);
}

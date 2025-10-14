#include <stdio.h>
int main()
{
	float u,a,t;
	float s;
	printf("enter u,a,t= ");
	scanf("%f%f%f",&u,&a,&t);
	s=u*t+(a*t*t)/2;
	printf("displacement s=%f",s);
	return 0;
}

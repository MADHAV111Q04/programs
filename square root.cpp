#include<stdio.h>
#define PI 3.14
int main()
{
	float radius,area;
	printf("enter radius of circle(in cm):");
	scanf("%f",radius);
	area=PI*radius*radius;
	printf("area of circle=%.2fcm\n",area);
	return 0;
}

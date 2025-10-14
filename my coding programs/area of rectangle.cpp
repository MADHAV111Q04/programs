#include<stdio.h>
int main()
{
	//declare variables
	float lenght,widht,area;
	//take inputs
	printf("enter lenght & widht of rectangle(in cm): ");
	scanf("%f%f",&lenght,&widht);
	//calculate area
	area=lenght*widht;
	//display result
	printf("area of rectangle=%.3fcm\n",area);
	return 0;
}

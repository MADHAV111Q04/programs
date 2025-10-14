#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	printf("enter an integer: ");
	scanf("%1f",&num);
	root=sqrt(num);
	printf("the square root of %.21f",num,root);
	return 0;
}

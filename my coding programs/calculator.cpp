#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("enter an operator= ");
	scanf("%c",&op);
	printf("\n enter two operands: ");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case '+':
			printf("\n sum=%d",a+b);
			break;
		case '-':
			printf("\n diff=%d",a-b);
			break;
		case '*':
			printf("\n mul=%d",a*b);
			break;
		default:
			printf("\n invalid");
	}
	printf("\n END");
	return 0;
}

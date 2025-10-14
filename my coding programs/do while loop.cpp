#include<stdio.h>
int main()
{
	int i=0;
	printf("start\n");
	do
	{
		i++;
		if (i==3)
		   continue;
		else 
		    printf("%d\t",i);
	
	}while(i<=5);
	printf("\nEND");
	return 0;
}

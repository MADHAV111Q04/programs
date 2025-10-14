/*#include<stdio.h>
int main()
{
	int avg;
    printf("enter the avg value: ");
    scanf("%d",&avg);
    if(avg>50&&avg<60)
    {
    	printf("not bad");
	}
	if(avg>60&&avg<70)
	{
		printf("good");
	}
	if(avg>70&&avg<80)
	{
		printf("very good");
	}
	if(avg>80&&avg<100)
	{
		printf("outstanding");
	}
	return 0;
}
  */
  
  
/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values of a and b: ");
	scanf("%d%d",&a,b);
	if(a>b)
	{
		printf("a is big");
	}
	else
	{
		printf("b is big");
	}
	return 0;
}*/



#include<stdio.h>
int main()
{
	int a=10,b=20,c=50;
	if(a>=b&&a>=c)
	{
		printf("a is big");
	}
	if(b>=a&&b>=c)
	{
		printf("b is big");
	}
	if(c>=a&&c>=b)
	{
		printf("c is big");
	}
	else
	{
		printf("abc values are equal");
	}
	return 0;
}

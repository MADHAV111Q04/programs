//call by value program:
#include<stdio.h>
void swap(int a,int b);//function prototype
int main()
{
	int x,y;
	 
	printf("enter x,y values:");
	scanf("%d%d",&x,&y);
	printf("\n before swapping in main x=%d\ty=%d",x,y);
    swap(x,y);
	printf("\n after swapping in main x=%d\ty=%d",x,y);
	return 0;	
}
void swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n inside function x=%d \t y=%d",a,b);
}

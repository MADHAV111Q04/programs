#include<stdio.h>
int main()
{
	int n, sum=0;
	printf("enter size of the array:");
	scanf("%d",&n);
	int i,arr[n];
	printf("\nenter the elements of the array:");
	for (i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf   ("\narray elements are: ");
	for (i=0;i<n;i++)
	{
	   sum+=arr[i];
	}
	printf("sum=%d",sum);
	
	return 0;
}

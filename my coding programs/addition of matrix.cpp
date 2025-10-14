#include<stdio.h>
int main()
{
	int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
	printf("input the size of the square matrix: ");
	scanf("%d",&n);
	printf("input elements in the frist matrix :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("element -[%d],[%d]: ",i,j);
		    scanf("%d",&arr1[i][j]);
		}
	}
	printf("input elements in the second matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		  printf("element-[%d][%d]:",i,j);
		  scanf("%d",&brr1[i][j]);	
		}
	}
	printf("\n the frist matrix is:");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		   printf("%d\t",brr1[i][j]);
	}
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	    crr1[i][j]=arr1[i][j]+brr1[i][j];
	return 0;
}

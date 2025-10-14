#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,m,sum;
	printf("enter number of elements");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("unable to create memory");
		exit(0);
	}
	else
	{
		printf("enter elements into array");
		for(i=0;i<n;i++)
		{
			scanf("%d",p+i);
		}
		printf("\ndisplay array elements");
		for(i=0;i<n;i++)
		{
			printf("\n%d=%d",p+i,*(p+i));
		}
		for(i=0;i<n;i++)
		{
			sum =sum+(*(p+i));
		}
		printf("sum of 5 elem:%d",sum);
		
		return 0;
	}
}

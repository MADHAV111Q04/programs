#include<stdio.h>
int main()
{
	int a[10],n,i,j,t,s;
	printf("enter no.of elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	//selection sort
	for(i=0;i<n;i++)
	{
		s=i;
		//find smallest element
		for(j=i+1;j<n;j++)
		{
			if(a[s]>a[j])
			{
				s=j;
			}
		}
		//swapping smallest and a[i]
		t=a[s];
		a[s]=a[i];
		a[i]=t;
	}
	printf("after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

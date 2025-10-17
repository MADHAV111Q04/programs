#include<stdio.h>
int mergesort(int a[],int low,int high);
int merge(int a[],int low,int mid,int high);
int mergesort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
}
}
int merge(int a[],int low,int mid,int high)
{
	int i,j,k,b[50];
	i=low;
	k=low;
	j=mid+1;
	while(i<=mid&& j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			k++;
			i++;
		}
		else
		{
			b[k]=a[j];
			k++;
			j++;
		}
		while(i<=mid)
		{
			b[k]=a[i];
			k++;
			i++;
		}
		while(j<=high)
		{
			b[k]=a[j];
			k++;
			j++;
		}
	}
	for(i=low;i<k;i++)
	{
		a[i]=b[i];
	}
}
int main()
{
	int i,n,a[n];
		printf("enter size ofarray:");
		scanf("%d",&n);
		printf("enter array elements:");
		for(i=0;i<n;i++)		
		{
			scanf("%d",&a[i]);
		}
		mergesort(a,0,n-1);
		printf("sorted array elements are:");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
		return 0;
}

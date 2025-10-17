#include<stdio.h>
void merge(int a[],int first,int mid,int last)
{
	int b[10];
	int i=first,j=mid+1,k=0;
	while(i<=mid&&j<=last){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(k<=mid){
		b[k]=a[i];
		i++;
		k++;
	}
	while(j<=last){
		b[k]=a[j];
		j++;
		k++;
	}
	for(i=first;i<k;i++)
	{
		a[i]=b[k];
	}
	void mergesort(int a[],int left,int right){
		if(left<right){
			int mid=(left+right)/2;
			mergesort(a,left,mid);
			mergesort(a,mid+1,right);
			merge(a,left,mid,right);
		}
	}
	int main()
	{
		int a[20],i,n;
		printf("enter size of array");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("sorted array elements are:");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
		}
	}
}

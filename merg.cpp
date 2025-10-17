#include<stdio.h>
void mergesort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);
void mergesort(int a[],int low,int high)
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
void merge(int a[],int low,int mid,int high)
{
	int i,j,k,b[50];
	i=low;
	k=low;
	j=mid+1;

while(a[i]<=mid && a[j]<=high)
{
	if(a[i]<a[j])
	{
		b[k]=a[i];
		i++;
		k++;
	}
	else
	{
		b[k]=a[j];
		j++;
			k++;
			
	}
}
while(a[i]<=mid)
{
	b[k]=a[i];
	i++;
	k++;
}
while(a[j]<=high)
{
	j++;
	k++;
}
for(int i=low;i<=high;i++)
{
	a[i]=b[i];
}
}
int main()
{
	int i,n;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("sorted array elements are");
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}


#include<stdio.h>
void quicksort(int a[],int first,int last){
	int i,j,temp,pivot;
	pivot=i;
	first=i;
	last=j;
	if(first<last){
		while(i<j){
		
		while(a[i]<=a[pivot]&&i<j){
			i++;
		}
		while(a[j]>a[pivot]){
			j--;
		}
	}
			if(i<j){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		
	}
	temp=a[pivot];
	a[pivot]=a[j];
	a[j]=temp;
	quicksort(a,first,j-1);
	quicksort(a,j+1,last);
	
}
int main(){
	int i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	printf("enter array elements:");
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("sorted array elements are:");
	{
		printf("%d",a[i]);
		
	}
	return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,i,m;
	printf("enter n value");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	*(ptr+i)=i+1;
	printf("\n printf the malloc elements are:");
	for(i=0;i<n;i++)
	   printf("%d%d \n",(ptr+i),*(ptr+i));
	free(ptr);
	printf("\n after free malloc elements are :");
	for(i=0;i<n;i++)
	   printf("%d=%d \n",(ptr+i),*(ptr+i));
	   return 0;
}*/



#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,i,m;
	printf("enter n value");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	*(ptr+i)=i+1;
	printf("\n printf the malloc elements are:");
	for(i=0;i<n;i++)
	   printf("%d%d \n",(ptr+i),*(ptr+i));
	free(ptr);
	printf("\n after free malloc elements are :");
	for(i=0;i<n;i++)
	   printf("%d=%d \n",(ptr+i),*(ptr+i));
	   return 0;
}

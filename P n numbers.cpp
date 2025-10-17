#include<stdio.h>
struct student
{
	char names[10];
	int marks;
};
int main()
{
	int n,total=0,i;
	float avg;
	struct student s[10];
	printf("enter no of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter student %d details",i+1);
		printf("name:");
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)total/n;
	printf("total=%d,avg=%2f",total,avg);
	return 0;
}

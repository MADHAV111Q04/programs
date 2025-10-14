#include<stdio.h>
struct student
{
	char name[50];
	int m1,m2,m3;
	float toyal,avg;
};
int main()
{
	int i,n;
	printf("enter the number of students: ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("enter name,3 subject marks of student %d\n",i+1);
		scanf("%s%d%d%d",s[i].m1,&s[i].m2,&s[i].m3);
	}
	for(i=0;i<n;i++)
	{
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].total/3.0;
		printf("total and average marks of student %d=%.2f,%.2f\n",i+1,s[i].total,s[i].avg);
	}
	return 0;
}

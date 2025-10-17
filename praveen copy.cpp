#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
char gender;
};
	int main()
	{
	struct student s1,s2;
	printf("enter rollno,name:");
	scanf("%d%s",&s2.rollno,&s2.name);
	s2=s1;
	printf("\nrollno:%d\n,name%s\ngender\n",s2.rollno,s2.name,s2.gender);
	return 0;
	
}

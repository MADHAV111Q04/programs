#include<stdio.h>
int main()
{
	char s1[50]="hello iam good",s2[50];
	strcpy(s2,s1);
	printf("s2=%s",s2);
	int res=strcmp(s1,s2);
	if(res==0)
	   printf("\nstrings are equal.");
	else
	   printf("\nstrings are not equal.");
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	printf("enter the string of s: ");
	//scanf("%s",s)
	//scanf("%[^\n]s",s);
	gets(s);
	printf("size of s=%d",sizeof(s));
	printf("\nlength=%d\n",strlen(s));
	puts(s);
	//int i;
	//for (i=0;s[i]!='\0';i++)
	//{
	//	printf("%c \t",s[i]);
	//}
	return 0;
}

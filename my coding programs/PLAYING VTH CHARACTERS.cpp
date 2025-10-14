#include<stdio.h>
int main()
{
	char ch;
	char s[24];
	char sen[24];
	scanf("%c%s",&ch,s);
	getchar();
	scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);
	
return 0;
	}

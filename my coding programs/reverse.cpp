#include<stdio.h>
#include<ctype.h>
int main()
{
	int i=0;
	char str1[20];
	printf("enter upper case string: %s\n",str1);
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str[1]=tolower(str1[i]);
	}
	printf("lowercase string is: %s\n",str1);
	char str2[20];
	printf("enter lower case string:\n",str2);
	gets(str2);
	for(i=o;str2[i]!='\0';i++)
	{
		str2[i]=toupper(str2[i]);
	}
	printf("upper sring is: %s\n",str2);
	//3.sentence conversion
	char str[]="thid=s is sample sentence.it contains multiple sentences!"
	printf("original sentence: %s\n",str);
	while(str[i]!='\0')
	{
		if(i==0|| (i>0 && (str[i-1]=='.'||
		           str[i-1]=='?' || str[i-1]=='i')))
	    for(i=0;str[i]!='\0';i++)
	    {
	    	str[i]=toupper(str[i]);
		}
	}
    else
    {
    	for(i=0;str[i]!='\0';i++)
    	{
    		str[i]=tolower(str[i]);
		}
	}
	i++;

printf("sentence case: %s\n",str);
//4.toggle case
char str3[]="this is sample sentence.it contains multiple sentences!";
printf("original sentence((toggle case)): %s\n",str3);
for(i=0;str3[i]!='\0';i++)
{
	if((str3[i]))
	{
		str3[i]=toupper(str3[i]);
	}else if(isupper(str3[i]))
	{
		str3[i]=tolower(str3[i]);
	}
}
printf("toggle case: %s\n",str3);
return 0;
}


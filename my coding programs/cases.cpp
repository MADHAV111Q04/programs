#include<stdio.h>
int man()
{
	char arr[30],s1[10],s2[10],s3[10];
	int opt,i=0,j,len=0;
	printf("enter an option\n");
	printf("1: find out lenght of the string\n");
	printf("2: concatenate of the two strings\n");
	printf("3: reverse the string\n");
	printf("4: copy of the string\n");
	printf("enter the choice\n");
	scanf("%d",&opt);
	}
	case 1:
	{
		printf("enter any string \n");
		scanf("%[^\n]s",arr);
		for(i=o;arr[i]!='0';i++)
		     printf("the lenght of the string %d",i);
		break;
    } 
    case 2:
    {
    	printf("sring concatenation");
    	printf("\n enter the first string:\n");
    	scanf(" %[^\n]s",s1);
    	printf("\n enter the second string:\n");
    	scanf("%[^\n]s",s2);
    	for(i=0;s1[i]!='0';i++)
    	{
    		s3[i]=s1[i];
		}
		s3[i]='\0';
		for(j=0;j<=i;j++)
		{
			s3[i+j]=s2[j];
		}
		printf("the concatenated string is %s",s3);
		break;
		}
	case 3:
		{
		printf("reverse the sting");
		printf("\n enter the string");
		scanf("%[^\n]s",s1);
		while(s1[i]!='\0')
		{
			len=len+1;
			i++
		}
		for(i=len-1;i>=0;i--)
		{
			printf("%c",s1[i]);
		}
		break;
		}
	case 4:
		{
		printf("string copying\n");
		printf("enter the 1st string: ");
		scanf(" %[^\n]s",s2);
		while(s2[i]!='\0')
		{
			s1[i]=s2[i];
			i++;
		}
		s1[i]='\0';
		 printf("%s",s1);
		 break;		
		}
		default:
			{
				printf("not is valid option........");
			}
    } 
}


#include<stdio.h>
struct address
{
	char dno[10];
	char city[20];
	int pin;
};
struct emp
{
	char ename[20];
	struct address a;
};
main()
{
	struct emp e;
	scanf("%s\t%s\t%s\t%d",e.ename,e.a.dno,e.a.city,&e.a.pin);
	printf("%s\t%s\t%s\t%d",e.ename,e.a.dno,e.a.city,&e.a.pin);
}

#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push()
{
	if(top==max-1)
	{
		printf("stack is overflow");
	}
	else
	{
		int val;
		printf("enter value");
		scanf("%d",&val);
		top++;
		stack[top]=val;
		printf("%d is pushed",stack[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("%d is poped",stack[top]);
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("%d is peek",stack[top]);
	}
}
void isempty()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("stack is not empty");
	}
}
void isfull()
{
	if(top==max-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("stack is not full");
	}
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("\nstack elements are:");
		for(int i=top;i>=0;--i)
		{
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.push\n2.pop\n3.peek\n4.isempty\n5.isfull\n6.display\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
			{
				pop();
				break;
				}	
			case 3:
			{
				peek();
				break;
				}	
			case 4:
			{
				isempty();
				break;
				}
			case 5:
			{
				isfull();
				break;
					}
			case 6:
			{
				display();
				break;
					}		
					default :
					{
						printf("u have entered wrong choice");
							}		
		}
	}
}

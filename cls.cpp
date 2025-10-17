#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=NULL;
void create_cll()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=head;
	}
}
void display()
{
	struct node*ptr;
if(head==NULL)
{
	printf("cll is empty");
}
else
{
	ptr=head;
	while(ptr->next!=head)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("%d->head",ptr->data);
}
}
int count()
{
	int c=0;
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		struct node*ptr;
		while(ptr->next!=head)
		{
			c++;
			ptr=ptr->next;
		}
		c++;
		return c;
	}
}
void firstinsert()
{
	struct node*ptr,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
	temp->next=head;
	head=temp;
	ptr->next=head;
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create\n2.display\n3.first insert\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create_cll();
					break;
				}
			case 2:
			{
				display();
				break;
				}	
			case 3:
			{
				firstinsert();
				break;
				}	
		}
	}
}

#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=NULL;
void create_sll()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value into the node");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void display_sll()
{
	struct node*temp,*ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("linkedlist is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}
}
void first_insert()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter data:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		create_sll();
	}
	else
	{
		temp->next=head;
		head=temp;
		
	}
}
void last_insert()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter data:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		create_sll();
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.create\n2.display\n3.first_insert\n4.last insert");
		printf("\nenter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 0:
				{
					exit(0);
					break;
				}
			case 1:
			{
				create_sll();
				break;
				}
			case 2:
			{
				display_sll();
				break;
					}
			case 3:
			{
				first_insert();
				break;
				}
			case 4:
			{
				last_insert();
				break;
					}		
			default:
			{
				printf("you have entered wrong choice");
						}			
		}
	}
}

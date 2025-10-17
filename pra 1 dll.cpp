#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*prev;
	int data;
	struct node*next;
}*head=NULL;
void createdll()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("enter value into the node");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		struct node*ptr;
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;                            
	}
}
void display()
{
	struct node*ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
	while(ptr!=NULL)
	{
		printf("<-%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
}
}
void firstinsert()
{
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
temp->prev=temp->next=NULL;
printf("enter value into the node");
scanf("%d",&temp->data);
if(head==NULL)
{
	head=temp;
}
else
{
ptr=head;
temp->next=head;
ptr->prev=temp;
head=temp;
printf("first insertion is successfull");	
}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.createdll\n2.display\n3.firstinsert \nenter your choice");
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
				createdll();
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
				default:
				{
					printf("you have entered wrong choice");
				}
							}				
		}
	}
	
}

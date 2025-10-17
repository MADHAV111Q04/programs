#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;
void create_cll()
{
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter value into the node");
scanf("%d",&temp->data);
temp->next=NULL;
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
	ptr->next=NULL;
	ptr->next=temp;
	temp->next=head;
}
}
void display_cll()
{
	struct node*ptr;
	ptr=head;
	if(head==NULL)
	{
	printf("circular linked list is empty");
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
void first_insert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value into the node");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	else
	{
	ptr=head;
	temp->next=head;
	while(ptr->next!=head)
	{
		ptr=ptr->next;
		}
		ptr->next=temp;
		head=temp;	
	}
}
last_insert()
{
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
temp->next=NULL;
printf("enter value into the node");
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
		ptr->next=NULL;
		ptr->next=temp;
		temp->next=head;
	}
}
int count_cll()
{
	struct node*ptr;
if(head==NULL)
{
	printf("cll is empty");
}
else
{
	int c=0;
	ptr=head;
	while(ptr->next!=head)
	{
	c++;
	ptr=ptr->next;	
	}
	c++;
	return c;
}
}
void first_delete()
{
	struct node*temp,*ptr;
	temp=head;
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else if(count_cll()==1)
	{
		ptr=head;
		head=NULL;
		free(ptr);
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		temp->next=head;
		ptr->next=head;
		printf("%d is deleted",temp->data);
		free(temp);
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.create_cll\n1.0.count\n2.display\n3.first insert\n4.last insert\n5.first delete");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create_cll();
					break;
				}
			case 0:
			{
				 exit(0);
				 break;
				}	
			case 2:
			{
				display_cll();
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
			case 5:
			{
				first_delete();
				break;
				}
				case 6:
				{
					count_cll();
					break;
								}				
			default :
			{
				printf("oops you have entered wrong choice");
					}		
		}
	}
}

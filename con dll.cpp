#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node*prev;
	int data;
	struct node*next;
}*head=NULL;
void create_dll()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=temp->prev=NULL;
	printf("enter value");
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
		temp->prev=ptr;
	}
}
void display_dll()
{
	struct node*ptr;
	if(head==NULL)
	{
		printf("dll is empty");
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("<-%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
}
}
void firstinsert_dll()
{
    struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=temp->prev=NULL;
	printf("enter value");
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
	}
}
void lastinsert_dll()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=temp->prev=NULL;
	printf("enter value");
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
		temp->prev=ptr;
	}
}
void firstdelete()
{
	struct node*ptr;
	ptr=head;
	head=head->next;
	free(ptr);
}
void lastdelete()
{
	struct node*temp,*ptr;
	ptr=head;
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	temp=ptr->next;
	temp->prev=ptr;
	ptr->next=NULL;
	free(temp);

}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create\n2.display\n3.firstinsert\n4.lastinsert\n5.first delete\n6.last delete\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create_dll();
					break;
				}
			case 2:
			{
				display_dll();
				break;
				}
			case 3:
			{
				firstinsert_dll();
				break;
				}
			case 4:
			{
				lastinsert_dll();
				break;
					}
			case 5:
			{
				firstdelete();
				break;
							}
			case 6:
			{
				lastdelete();
				break;
											}								
				default :
				{
					printf("u have entered wrong choice");
					}	
		}
	}
}

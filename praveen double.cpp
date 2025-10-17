#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	struct node*prev;
}*head=NULL;
void create()
{
	struct node*newnode,*ptr;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
	ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
		ptr->next=newnode;
		newnode->prev=ptr;		
	}
}
void insert_at_begin()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	newnode->prev=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
}
void delete_at_begin()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("list is empty:");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}

void display()
{
	struct node*ptr;
	if(head==NULL)
	{
		printf("list is empty:");
	}else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL");
	}
}
int main()
{
	int ch;
	do
	{
		printf("\n1.create\n,2.display\n,3.insert_at_begin\n,4.delete_at_begin\nenter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();break;
			case 2: display();break;
			case 3:insert_at_begin();break;
			case 4:delete_at_begin();break;
		}
	}while(1);
}

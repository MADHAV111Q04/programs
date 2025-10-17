#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;
void create()
{
	struct node*newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=head;
	}
}
void insert_at_begin()
{
	struct node*newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		newnode->next=head;
	}
	else
	{
		newnode->next=head;
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		head=newnode;
	}
}
void insert_at_end()
{
	create();
}
void delete_at_begin()
{
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else
	{
	struct node*temp,*ptr;
	temp=head;
	ptr=head;
	while(temp->next!=head)
	{
		temp=temp->next;
	}
	head=head->next;
	temp->next=head;
	free(ptr);
}
}
void display()
{
	struct node*temp;
	if(head==NULL)
	{
	printf("cll is empty:");
}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("%d->head",temp->data);
	}
	
}
int main()
{
	int ch;
	do
	{
		printf("\n1.create\n,2.insert_at_begin,\n3.insert_at_end\n,4.delete_at_begin\n,5.display\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();break;
			case 2:insert_at_begin();break;
			case 3:insert_at_end();break;
			case 4:delete_at_begin();break;
			case 5:display();break;	
		}
	}while(1);
}

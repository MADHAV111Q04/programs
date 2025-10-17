#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=NULL;
void createlinkedlist(){
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter value into node:");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void displaylinkedlist()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("\n linkedlist is empty");
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
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf(" \n enter data in first node");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
	printf("\n insert at first successful");
}
void last_insert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter value into the node");
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
		printf("last insertion succesfull");
	}
}
int main()
{
	int ch;
	while(1){
	printf("\n0.exit\n1.createlinkedlist\n2.display\n3.first insert\n4.last_insert\n enter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			{
			createlinkedlist();
			break;
		}
		case 2:{
			displaylinkedlist();
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
		case 0:
		{
			exit(0);
			break;
			}
	 default:
	{
		printf("you have entered wrong choice");
	}
}
}
}


#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=NULL;
void create(){
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter value into the node:");
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
void display()
{
	struct node*ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("linkedlist is empty:");
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
void firstinsert()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter value into node:");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
	printf("first insertion is successful");
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.create\n2.display\n3.first insert\n enter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				{
					create();
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
			case 0:
			{
				exit(0);
				break;
							}
			default:
			{
				printf("yup you have entered wrong choice:");
											}								
		}
	}
}

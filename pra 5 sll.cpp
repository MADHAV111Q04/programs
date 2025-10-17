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
	printf("enter value ");
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
	struct node*ptr;
	ptr=head;
	while(ptr!=NULL)
	{
	printf("%d->",ptr->data);
	ptr=ptr->next;
	}
	printf("NULL\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create\n2.display\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
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
				default :
				{
					printf("you have entered wrong choice");
					}	
		}
	}
}

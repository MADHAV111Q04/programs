#include<Stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=NULL;
void createlinkedlist()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\n enter value:");
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
	if(head==NULL)
	{
		printf("linked list is empty:");
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
	temp->next=NULL;
	printf("enter value into the node:");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
}
int main()
{
	int ch;
	while(1){
		printf("\n0.exit\n1.create\n2.display\n3.firstinsert\n enter your choice");
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
				createlinkedlist();
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
							default:
								
							{
								printf("you have entered wrong choice");
											}				
		}
	}
}

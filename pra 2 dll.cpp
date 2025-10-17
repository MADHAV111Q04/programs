#include<stdio.h>
#include<stdlib.h>
struct node{
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
void displaydll()
{
	struct node*ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("<-%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL");
}
void firstinsert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("enter value into the data");
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
 printf("first insertion is succesfull");
}
}
void lastinsert(){
	struct node*ptr,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("enter value into the node");
	scanf("%d",&temp->data);
	if(head==NULL){
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
	printf("last insertion is succesfull");
	}
}
void firstdelete()
{
if(head==NULL)
{
	printf("linlked list is emptty");
}
else
{
	struct node*ptr;
	ptr=head;
	head=head->next;
	if(head!=NULL)
	{
		head->prev=NULL;
	}
	free(ptr);
	printf("first deletion is successfull");
	
}
	
}
void lastdelete(){
	struct node*ptr,*temp;
	ptr=head;
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->prev=ptr;
	ptr->next=NULL;
	free(temp);
	printf("last deletion is successfull");
}
void anyposinsert()
{
	int pos,count=0;
	struct node*temp,*ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=temp->next=NULL;
	printf("enter value into the node");
	scanf("%d",&temp->data);
	printf("enter position");
	scanf("%d",&pos);
	if(pos<1 || pos>count+1)
	{
		printf("invalid position");
	}
	else
	{
	if(pos==1)
	{
		firstinsert();
	}
	else if(pos>1 || pos<count)
	{
		ptr=head;
		for(int i=1;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;
	}
	else
	{
	lastinsert();	
	}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.createdull\n2.displaydll\n3.firstinsert\n4.firstdelete\n5.lastdelete \n enter your choice");
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
				displaydll();
				break;
			}
			case 3:
			{
				firstinsert();
				break;
				}
			case 4:
			{
				firstdelete();
				break;
					}
			case 5:
			{
				lastdelete();
				break;
							}				
				default:
					{
						printf("oops you have entered wrong choice");
					}
		}
	}
}

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
		temp->prev=head;
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
void display()
{
	struct node*ptr;
	if(head==NULL)
	{
		printf("DLL IS EMPTY");
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
void firstinsert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=temp->prev=NULL;
	printf("enter value");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		temp->prev=head;
	}
	else
	{
		ptr=head;
		temp->next=ptr;
		head=temp;
		temp->prev=head;	
	}
}
void lastinsert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=temp->prev=NULL;
	printf("enter value");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		temp->prev=head;
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
	struct node*ptr,*temp;
	if(head==NULL)
	{
		printf("dll is empty");
	}
	else
	{
		ptr=head;
		temp=ptr->next;
		temp->prev=head;
		head=temp;
		free(ptr);
	}
}
void lastdelete()
{
	struct node*temp,*ptr;
	if(head==NULL)
	{
		printf("dll is empty");
	}
	else
	{
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
}
void anyposinsert()
{
	int count=0,pos;
	struct node*temp,*ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
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
		else if(pos>1 && pos<count)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			temp->next=temp->prev=NULL;
			printf("enter value");
			scanf("%d",&temp->data);
			ptr=head;
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
			temp->prev=ptr;
		}
	
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create\n2.display\n3.firstinsert\n4.lastinsert\n5.firstdelete\n6.lastdelete\n7.anyposinsert\n enter your choice");
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
			display();
			break;	
		}
		case 3:
			{
				firstinsert();
				break;
			}
		case 4:
		{
			lastinsert();
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
		case 7:
		{
			anyposinsert();
			break;
							}					
	}
}
}

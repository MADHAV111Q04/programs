#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=NULL;
void create_cll()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value");
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
		ptr->next=temp;
		temp->next=head;
	}
}
void display()
{
	struct node*ptr;
	if(head==NULL)
	{
		printf("cll is empty");
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
void firstinsert()
{
	struct node*ptr,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter valuer");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
		temp->next=head;
	}
	ptr=head;
	while(ptr->next!=head)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->next=head;
	head=temp;
}
void lastinsert()
{
	create_cll();
}
void firstdelete()
{
	struct node*ptr;
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else
	{
		ptr=head;
		head=head->next;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		ptr->next=head;
	}
}
void lastdelete()
{
	struct node*temp,*ptr;
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else
	{
		ptr=head;
		while(ptr->next->next!=head)
		{
			ptr=ptr->next;
		}
		temp=ptr->next;
		ptr->next=head;
		free(temp);
	}
}
void anyposinsert()
{
	int count=0,pos;
	struct node*ptr,*temp;
	ptr=head;
	while(ptr->next!=head)
	{
		count++;
		ptr=ptr->next;
	}
	count++;
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
			temp->next=NULL;
			printf("enter value");
			scanf("%d",&temp->data);
			ptr=head;
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp->next=ptr->next;
			ptr->next=temp;
		}
		else
		{
			lastinsert();
		}
	}
}
void anyposdelete()
{
	int pos,c=0;
	struct node*temp,*ptr;
	ptr=head;
	while(ptr->next!=head)
	{
		c++;
		ptr=ptr->next;
	}
	c++;
	printf("enter position");
	scanf("%d",&pos);
	if(pos<1 || pos>c+1)
	{
		printf("invalid positon");
	}
	else
	{
		if(pos==1)
		{
		firstdelete();
		}
		else if(pos>1 && pos<c)
		{
			ptr=head;
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			free(temp);
		}
		
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create\n2.display\n3.firstinsert\n4.lastinsert\n5.firstdelete\n6.lastdelete\n7,anyposinsert\n8.anyposdelete\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create_cll();
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
			case 8:
				{
					anyposdelete();
					break;
				}
		}
	}
}


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
	}
}
void display(){
	struct node*ptr;
	if(head==NULL)
	{
		printf("single linked list is empty");
	}
	else
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
void firstinsert()
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value");
	scanf("%d",&temp->data);
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
void lastinsert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
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
	}
}
void firstdelete()
{
	struct node*ptr;
	ptr=head;
     if(head==NULL)
     {
     	printf("sll is empty");
	 }
	 else
	 {
	 	ptr=head;
	 	head=head->next;
	 	free(ptr);
	 }
}
void lastdelete()
{
	struct node*temp,*ptr;
	ptr=head;
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	ptr->next=NULL;
	free(temp);
}
void anyposinsert()
{
	int pos,count=0;
	struct node*temp,*ptr;
	ptr=head;
	while(ptr!=	NULL)
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
			temp->next=NULL;
			printf("enter value");
			scanf("%d",&pos);
			ptr=head;
			for(int i=1;i<pos-1;i++)
			{
			ptr=ptr->next;
			}
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
	int pos,c;
	struct node*temp,*ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		c++;
		ptr=ptr->next;
	}
	printf("enter position");
	scanf("%d",&pos);
	if(pos<1 || pos>c+1)
	{
		printf("invalid position");
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
			ptr->next=temp;
			
			ptr->next=temp->next;
			free(temp);
		}
		else
		{
			lastdelete();
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create\n2.display\n3.firstinsert\n4.lastinsert\n5.firstdelete\n6.lastdelete\n7.anyposinsert\n8.anyposdelete\n enter your choice");
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
			default:
			{
				printf("you have entered wrong choice");
				}	
		}
	}
}

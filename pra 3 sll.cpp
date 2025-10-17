#include<stdio.h>
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
	printf("enter value into the node");
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
		printf("linkedlist is empty");
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
	printf("enter value into the node:");
	scanf("%d",&temp->data);
	temp->next=head;
	head=temp;
	printf("first insertion is succesfull");
}
void lastinsert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value into node:");
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
		printf("last insertion is succesfull");
	}
}
void firstdelete()
{
	struct node*ptr;
	ptr=head;
	head=ptr->next;
	free(ptr);
	printf("first deletion successfull");
}
void lastdelete()
{
	struct node*temp,*ptr;
	ptr=head;
	while(ptr->next->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
	free(temp);
	printf("\nlast deletion is succesfull");
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
	temp->next=NULL;
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
		ptr=head;
		if(pos==1)
		{
			firstinsert();
		}
		else
	{
		for(int i=1;i<pos-1;i++)
		{
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
	printf("anypos insert is succesfull");
}
}
void anyposdelete()
{
	int pos,count=0;
	struct node*ptr,*temp;
	ptr=head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
printf("enter position");
scanf("%d",&pos);
if(pos<1 || pos>count)
{
	printf("invalid position");
	}	
	else
	{
		ptr=head;
		if(pos==1)
		{
			firstdelete();
		}
		else if(pos>1 && pos <count)
		{
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			free(temp);
			printf("anypos deletion done");
		}
		else
		{
			lastdelete();
		}
	}
}
void sumofelements()
{
	int sum=0;
	struct node*ptr;
	ptr=head;
	if(ptr==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			sum=sum+ptr->data;
			ptr=ptr->next;
		}
		printf("sum of elements is:%d",sum);
	}
}
void alternative()
{
	struct node*ptr;
	ptr=head;
	printf("alternative nodes are");
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		if(ptr->next!=NULL)
		{
			ptr=ptr->next->next;
		}
		else
		{
			break;
		}
	}
	printf("NULL");
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.createlinkedlist\n2.display\n3.firstinsert\n4.lastinsert\n5.firstdelete\n6.lastdelete\n7.anyposinsert\n8.anyposdelete\n9.sumofelements\n10.alternative \n enter your choice");
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
			case 9:
			{
				sumofelements();
				break;
				}
			case 10:
			{
				alternative();
				break;
				}												
				default:
				{
					printf("you have entered wrong choice");
				}
		}
	}
}

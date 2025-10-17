#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;
void create_cll()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value into node");
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
void display_cll()
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
void first_insert()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value into the node");
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
       temp->next=head;
       head=temp;
       ptr->next=head;
	printf("first insertion is successfull");	
		
	}
}
int count()
{
	int c=0;
	struct node*ptr;
	ptr=head;
	while(ptr->next!=head)
	{
		c++;
		ptr=ptr->next;
	}
	c++;
	printf("%d is count",c);
	return c;
}
void last_insert()
{
	create_cll();
}
void anypos_insert()
{
	int pos;
	int c=count();
	struct node*temp,*ptr;
	ptr=head;
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
			first_insert();
		}
		else if(pos>1 && pos<c)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			temp->next=NULL;
			printf("enter value into node");
			scanf("%d",&temp->data);
			for(int i=1;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp->next=ptr->next;
			ptr->next=temp;
		}
		else
		{
			last_insert();
		}
	}
}
void first_delete()
{
	struct node*temp,*ptr;
	ptr=head;
	temp=head;
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else if(count()==1)
	{
	head=NULL;	
	}
	else
	{
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		head=temp->next;
		ptr->next=head;
		free(temp);
		printf("\nfirst node deleted successfully");
	}
}
void last_delete()
{
	struct node*temp,*ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else
	{
		while(ptr->next->next!=head)
		{
			ptr=ptr->next;
		}
		temp=ptr->next;
		ptr->next=head;
		free(temp);
		printf("last deletion is successfull");
	}
}
void anypos_delete()
{
	struct node*temp,*ptr;
	int pos,c;
	printf("enter pos");
	scanf("%d",&pos);
	c=count();
	if(pos<1 || pos>c+1)
	{
		printf("invalid position");
	}
	else
	{
		if(count()==1)
		{
			head==NULL;
		}
		else if(pos>1 && pos<c)
		{
			ptr=head;
			for(int i;i<pos-1;i++)
			{
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=temp->next;
			free(temp);
			printf("%d is deleted",temp->data);
		}
		else
		{
			last_delete();
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.create\n2.display\n3.first insert\n4.count\n5.last_insert\n6.anypos insert\n7.first delete\n8.last delete\n9.anypos delete");
		printf("\nenter your choice");
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
				create_cll();
				break;
				}	
			case 2:
			{
				display_cll();
				break;
				}	
			case 3:
			{
				first_insert();
				break;
				}
			case 4:
			{
				count();
				break;
				}
			case 5:
			{
				last_insert();
				break;
					}
			case 6:
			{
				anypos_insert();
				break;
							}
			case 7:
			{
				first_delete();
				break;
				}
			case 8:
			{
				last_delete();
				break;
					}
			case 9:
			{
				anypos_delete();
				break;
					}											
				default:
				{
					printf("you have entered wrong choice");
					}	
		}
	}
}

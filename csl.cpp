#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*head=NULL;
void create_csl()
{
	struct node*temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node)); 
	printf("\nEnter data value in node: ");
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
		printf("csl is empty");
	}
	else
	{
		ptr=head;
		while(ptr->next!=head)
		{
			ptr=ptr->next;
		}
		printf("%d->head",ptr->data);
	}
}
int count()
{
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		int c=0;
		struct node*ptr;
		while(ptr->next!=head)
		{
			c++;
			ptr=ptr->next;
		}
		c++;
		return c;
	}
}
void firstdelete()
{
	struct node*temp,*ptr;
	ptr=head;
	temp=head;
	if(head==NULL)
	{
		printf("cll is empty");
	}
	else
	{
		if(count()==1)
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
			printf("%d",temp->data);
			free(temp);
		}
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("\n1.create\n2.display\n3.count\n4.firstdelete\n enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create_csl();
					break;
				}
			case 2:
			{
				count();
				break;
				}	
			case 3:
			{
				firstdelete();
				break;
				}
			case 4:
			{
				display();
				break;
					}		
		}
	}
}

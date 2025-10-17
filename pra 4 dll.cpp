#include<stdio.h>
#include<stdlib.h>
struct node{
struct node*prev;
int data;
struct node*next;
}*head=NULL;
void create()
{
	struct node*temp,*ptr;
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
	ptr=head;
	if(head==NULL)
	{
		printf("dll is empty");
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
void first_insert()
{
	struct node*temp,*ptr;
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
	ptr=head;
	temp->next=head;
	ptr->prev=temp;
	head=temp;
	}
}
void last_insert()
{
	struct node*temp,*ptr;
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
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;
	}
}
void first_delete()
{
	if(head==NULL)
	{
		printf("dll is empty");
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
void last_delete()
{
	if(head==NULL)
	{
	printf("dll is empty");	
	}
	else
	{
		struct node*temp,*ptr;
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
}
anypos_insert()
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
	printf("enter pos");
	scanf("%d",&pos);
	if(pos<1 || pos>count+1)
	{
		printf("invalid position");
	}
	else if(pos>1 || pos<count)
	{
		ptr=head;
		while(ptr->next->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->prev=ptr;
	}
	else
	{
		last_insert();
	}
	
}
void anypos_delete()
{
    int pos, count = 0, i;
    struct node *ptr = head, *temp;

    /* count nodes */
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }

    printf("enter pos : ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count)            /* invalid position */
    {
        printf("invalid position\n");
        return;
    }

    if (pos == 1)                          /* delete first node */
    {
        first_delete();
        return;
    }

    if (pos == count)                      /* delete last node */
    {
        last_delete();
        return;
    }

    /* delete node at position pos (2 … count-1) */
    ptr = head;
    for (i = 1; i < pos - 1; i++)          /* move to (pos-1)th node */
        ptr = ptr->next;

    temp = ptr->next;                      /* node to delete */
    ptr->next = temp->next;                /* unlink forward */
    temp->next->prev = ptr;                /* unlink backward */
    free(temp);

    printf("deletion successful\n");
}

int main()
{
	int ch;
	while(1)
	{
		printf("\n0.exit\n1.create\n2.display\n3.first insert\n4.last insert\n5.first delete\n6.last delete\n7.anypos_insert\n8.anypos_delete \nenter your choice");
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
			first_insert();
			break;
			}
		case 4:
			{
				last_insert();
				break;
			}
		case 5:
		{
			first_delete();
			break;
			}
		case 6:
		{
			last_delete();
			break;
				}
		case 7:
		{
			anypos_insert();
			break;
						}
		case 8:
		{
			anypos_delete();
			break;
			}								
		default:
		{
			printf("opps you have entered wrong choice");
				}
			}
	}

}

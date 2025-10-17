// csl
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
} *head=NULL;
void create_cll()
{
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the node:");
	scanf("%d",&temp->data);
	temp->next=NULL;
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
		ptr->next=NULL;
		ptr->next=temp;
		temp->next=head;
		
		
	}
	
}
void display_cll()
{
	if(head==NULL)
	{
		printf("\ncircular linked list is empty");
	}
	else
	{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=head)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("%d->head",ptr->data);
		
	}
}
int count_cll()
{
	struct node *ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("\ncll is empty:");
		
	}
	else
	{
		
		int c=0;
		while(ptr->next!=head)
		{
			c++;
			ptr=ptr->next;
		}
		c++;
		return c;
		
	}
	

}
void last_insert_cll()
{
	create_cll();
}
void first_insert_cll()
{
  struct node *temp,*ptr;
  temp=(struct node*)malloc(sizeof(struct node));
printf("\n enter the node");
  scanf("%d",&temp->data);
  temp->next=NULL;
  if(head==NULL)
  {
  	head=temp;
  	temp->next=head;
  }
  else
  {
  	temp->next=head;
  	ptr=head;
  	while(ptr->next!=head)
  	{
  		ptr=ptr->next;
	}
	  ptr->next=temp;
	  head=temp;
	  }
}
anypos_insert()
{
  struct node *temp,*ptr;
  ptr=head;	
  int count;
  int c = count;
  int pos;
  printf("\nenter pos:");
  scanf("%d",&pos);
  if(pos<1||pos>c+1)
  {
  	printf("invalid pos");
  }
  else
  {
  	if(pos==1)
  	{
  		first_insert_cll();
	  }
	  else if (pos>1&& pos<c)
	  {
	  	temp=(struct node*)malloc(sizeof(struct node));
	  	printf("\nenter data");
	  	scanf("%d",&temp->data);
	  	temp->next=NULL;
	  	int i;
	  	for(i=1;i<pos-1;i++)
	  	{
	  		ptr=ptr->next;
		  }
		  temp->next=ptr->next;
		  ptr->next=temp;
		  
	  }
	  else
	  {
	  	last_insert_cll();
	  }
  }
}
void first_delete()
{
	struct node *ptr,*temp;
	temp=head;
   if(head==NULL)
   {
   	printf("\n cll is empty");
   }
   else if (count_cll()==1)
   { ptr=head;
   	head=NULL;
   	free(ptr);
   }
   else
   {
   	ptr=head;
   	while (ptr->next!=head)
   	{
   		ptr=ptr->next;
   		
	   }
	   head=temp->next;
	   ptr->next=head;
	   printf("%d",temp->data);
	   free(temp);
   }
}
void last_delete(){
	struct node*ptr,*temp;
	ptr=head;
	if(head==NULL){
		printf("cll is empty");
		
	}
	else if(count_cll()==1){
		
			head=NULL;
			free(ptr);
			
		}
		else{
			while(ptr->next->next!=head){
				ptr=ptr->next;
			}
			temp=ptr->next;
			ptr->next=head;
			printf("%d is deleted",temp->data);
			free(temp);
			
		}
}
void anypos_delete(){
	struct node *ptr,*temp;
	ptr=head;
    int pos,i,c=count_cll();
    printf("enter the pos");
    scanf("%d",&pos);
    
    if(pos<1||pos>c){
    	printf("invalid position");
	}
	else{
		if(count_cll()==1){
			first_delete();
		}
		else if(pos>1&&pos<c){
		for(i=1;i<pos-1;i++)
		{
			ptr=ptr->next;
		}	
		temp=ptr->next;
		ptr->next=temp->next;
		free(temp);
		
		
		
		}
		else{
			last_delete();
		}
	}
    
}
int main()
{
	int ch;
	while(1)
	{
	printf("\n0.exit\n1.create_cll\n2.display_cll\n3.count_cll\n4.last_insert_cll\n5.first_insert\n6.anypos_insert\n7.firstdelete\n8.last delete\n9.anypos delete\nenter your choice:");
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
					display_cll();
					break;
				}
				case 3:{
					printf("%d",count_cll());
					break;
				}
				case 4:
				{
					last_insert_cll();
					break;
				}
				case 5:
				{
				    first_insert_cll();
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
				case 8:{
					last_delete();
					break;
				}
				case 9:{
					anypos_delete();
					break;
				}
				case 0:
					{
						exit(0);
						break;
					}
					default:
						{
							printf("wrong choice");
							break;
						}
	}
}
}

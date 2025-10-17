#include<stdio.h>
#include<stdlib.h>
#define max 5
int size=0;
struct node
{
	int data;
	struct node*next;
};
struct node*r=NULL,*f=NULL;
void enque()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);	
	if(max==size)
	{
	printf("list is overflow:");
}
return;
 if(f==NULL&&r==NULL){
	f=r=newnode;
	printf("%d is enqueued",newnode->data);
}
	size++;
	else
	{
	r=newnode->next;
	r=newnode;
}
	size++;
	printf("%d is enqueued",newnode->data);
}
void deque()
{
if(f==NULL&&r==NULL)
{
	printf("list is empty:");
}
else
if(f==NULL&&r==NULL)
{
	printf(list is empty:);
}
else
{
	printf("%d is dequeued",f->data);
	f=f->next;
	free(f);
}
}
void display()
{
	struct node*temp;
	if(f==NULL&&r==NULL)
	{
		printf("list is empty:");
	}
	else
	temp=f;
	while(temp!=NULL)
	{
		printf("%d\n",temp->next);
		temp=temp->next;
	}
}
void peek()
{
	if(f==NULL&&r==NULL)
	{
		printf("list is empty:");
	}
	else
	{
		printf("%d is peek",f->data);
	}
}
int main()
{
	int ch;
	do
	{
		printf("\n1.enque\n,2.deque\n,3.display\n,4.peek\n,enter your choice:");
		scanf("%d",&ch);
		switch(ch){
	case 1:enque();break;
	case 2:deque();break;
	case 3:display();break;
	case 4:peek();break;
	case 5:exit(0);
}
}while(1);
}


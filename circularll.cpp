#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node*prev;
}*head=NULL;
void create(){
struct node *ptr,*temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->next=NULL;
temp->prev=NULL;
printf("enter the data");
scanf("%d",&temp->data);
if(head==NULL)
{
	head=temp;
	temp->next=head;
	temp->prev=head;
	}
	else{
		ptr=head;
		while(ptr->next!=head){
			ptr=ptr->next;
		}
		temp->next=ptr->next;
		temp->prev=ptr;
		ptr->next=temp;
		head->prev=temp;
	}	
}
void display(){
	struct node*ptr;
	ptr=head;
	while(ptr->next!=head){
		printf("<-%d->",ptr->data);
		ptr=ptr->next;
	}
	printf("<-%d->",ptr->data);
	printf("head");
}
void firstinsert(){
	struct node*ptr,*temp;
	ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->next=NULL;
	printf("enter data");
	scanf("%d",&temp->data);
	if(head==NULL){
		head=temp;
	temp->next=head;
	temp->prev=head;	
	}
	else{
	while(ptr->next!=head){
		ptr=ptr->next;
	}
	temp->next=head;
	temp->prev=ptr;
	ptr->next=temp;
	head->prev=temp;
	head=temp;
		
	}
}
void lastinsert(){
	struct node*ptr,*temp;
	ptr=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->prev=NULL;
	temp->next=NULL;
	printf("enter data");
	scanf("%d",&temp->data);
	if(head==NULL){
		head=temp;
	temp->next=head;
	temp->prev=head;	
	}
	else{
		while(ptr->next!=head){
			ptr=ptr->next;
		}
		temp->prev=ptr;
		temp->next=ptr->next;
		ptr->next=temp;
		head->prev=temp;
	}
	
}
void anyposinsert(){
	struct node *ptr,*temp;
	int c=0,pos;
	ptr=head;
	while(ptr->next!=head){
	c++;
	ptr=ptr->next;	
	}
	c++;
	printf("\nenter pos");
	scanf("%d",&pos);
	if(pos<1||pos>c+1){
		printf("\ninvalid pos");
	}
	else{
		struct node*ptr,*temp,*ptr1;
		ptr=head;
		if(pos==1)
		firstinsert();
		else if(pos<c&&pos>1)
		{
			for(int i=1;i<pos-1;i++){
				ptr=ptr->next;
			}
			temp=(struct node*)malloc(sizeof(struct node));
        	temp->prev=NULL;
	        temp->next=NULL;
         	printf("\nenter data");
        	scanf("%d",&temp->data);
        	ptr1=ptr->next;
        	temp->next=ptr->next;
        	temp->prev=ptr;
         	ptr1->prev=temp;
        	ptr->next=temp;
		
		}
		else {
			lastinsert();
		}
	}
}
void firstdelete()
{
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
struct node*ptr,*temp;
ptr=head;
while(ptr->next!=NULL)
{
	ptr=ptr->next;
}
temp=head;
ptr->next=temp->next;
head=temp->next;
free(temp);

}
	
}
/*void lastdelete(){
	struct node*ptr,*temp;
ptr=head;
		if(head==NULL)
	{
		printf("linked list is empty");
	}
	
	else
	{

while(ptr->next!=NULL)
{
	ptr=ptr->next;
}
ptr->next=temp;

}
}*/
int main(){
	int ch;
	while(1){
		printf("\n1.create\n2.display\n3.firstinsert\n4.lastinsert\n6.anyposinsert\nenter your choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:{
				create();
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				firstinsert();
				break;
			}
			case 4:{
				lastinsert();
				break;
			}
			case 5:{
				firstdelete();
				break;
			}
			case 6:{
				anyposinsert();
				break;
			}
		}
	}
}


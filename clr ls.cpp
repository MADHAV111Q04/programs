#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node*next;
	int data;
}*head=NULL;
void create_csll(){
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL){
			head=temp;
	        temp->next=head;
	}
	else {
		ptr=head;
		while(ptr->next!=head){
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=head;
	}

}
void display(){
	if(head==NULL){
		printf("cll is empty");
		
	}
	else {
		struct node *ptr;
		ptr=head;
		while(ptr->next!=head){
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("%d->head",ptr->data);
	}
	
}
void cll_count(){
	struct node*ptr;
	if(head==NULL)
	{
		head=ptr;
	}
	ptr=head;
	int count=0;
	if(head==NULL){
		printf("cll nodes are 0");
	}
	else{
	
	while(ptr->next!=head){
		count++;
		ptr=ptr->next;
	}
	count++;
	printf("count of nodes is %d",count);
}
}

void last_insert(){
	create_csll();
}
void first_insert()
{
struct node*temp,*ptr;
temp=(struct node*)malloc(sizeof(struct node));
printf("\nenter value in node");
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
 void anypos_insert()
{
 struct node*temp,*ptr;
 ptr=head;
 int pos,c=0;
 printf("enter the position");
 scanf("%d",&pos);
  c=count();
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
		printf("\nenter data:");
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
	 	last_insert();
	  } 
 }
 
 
 
 	
}
int main(){
	int ch;
	while(1){
		printf("\n0.exit\n1.create\n2.display\n3.count\n4.last insert \n5.first_insert \n6.anypos_insert \nenter your choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:{
				create_csll();
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				cll_count();
				break;
			}
			case 0:{
				exit(0);
				break;
			}
			case 4:{
				last_insert();
				break;
			}
			case 5:{
				first_insert();
				break;
			}
			case 6:{
				anypos_insert();
				break;
			}
			default :{
				printf("entered wrong choice");
				break;
			}
		}
	}
}

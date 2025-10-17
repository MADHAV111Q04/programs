
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL;

void create_csll(){
	struct node *temp,*ptr;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("\nenter the data of node");
	scanf("%d",&temp->data);
	if(head==NULL){
		head=temp;
		temp->next=head;
	}
	else{
		ptr=head;
		while(ptr->next!=head){
			ptr=ptr->next;
		}
		ptr->next=temp;
		temp->next=head;
	}
	printf("\ncreation is sucess");
	
}
void display(){
	if(head==NULL){
		printf("\nlist is empty");
		return;
	}
	else{
		struct node *ptr;
		ptr=head;
		while(ptr->next!=head){
			printf("<-%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("%d->head",ptr->data);
	}
}
int count(){
	
	int c=0;
	struct node *ptr;

	ptr=head;
	while(ptr->next!=head){
		c++;
		ptr=ptr->next;
	}
	c++;
	printf("\ncount of nodes:%d",c);
}
void last_insert(){
	create_csll();
}
void first_insert(){
	struct node *ptr,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nenter the data of node");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		temp->next=head;
		
	}
	else{
	
	temp->next=head;
	ptr=head;
	while(ptr->next!=head){
		ptr=ptr->next;
	}
	ptr->next=temp;
	head=temp;
}
	
}
void anypos_insert(){
	int pos;
		
	int c;
	c=count();
	struct node *temp,*ptr;
	ptr=head;

	printf("\nenter the pos");
	scanf("%d",&pos);
	if(pos<1 || pos>c+1){
		printf("\n invalid pos");
	}
	else {
		if(pos==1){
			first_insert();
		}
		else if(pos>1 && pos<c){
			temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	printf("enter value into the node");
	scanf("%d",&temp->data);
	int i;

	for(i=1;i<pos-1;i++){
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	ptr->next=temp;
		}
		else{
			last_insert();
		}
	}
	printf("\n any pos insertion is sucess");
}
void first_delete(){
	struct node *ptr,*temp;
	ptr=head;
	temp=head;
	if(head==NULL){
		printf("CLL is empty");
	}
	else if(count()==1){
		head=NULL;
	}
	else{
		
		while(ptr->next!=head){
			ptr=ptr->next;
		}
		head=temp->next;
		ptr->next=head;
		printf("%d",temp->data);
		free(temp);
	}
	printf("\nfirst deletion is sucess");
}
void last_delete()
{
 struct node*ptr,*temp;
 ptr=head;
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
		while(ptr->next->next!=head)
		{
			ptr=ptr->next;
		}
		temp=ptr->next;
		ptr->next=head;
		printf("%d deleted",temp->data);
		free(temp);
	 } 
 }
}
void anypos_delete()
{
	int pos,c;
	printf("enter pos:");
	scanf("%d",&pos);
	c=count();
	if(pos<1 || pos>c)
	{
	printf("invalid position");
	}
	else
	{
		struct node*ptr,*temp;
	if(pos==1)
	{
		first_delete();
		}
	else if(pos>1 && pos<c)
	{
	int i;
	ptr=head;
	for(i=1;i<pos-1;i++)
	{
		ptr=ptr->next;
	}		
	temp=ptr->next;
	ptr->next=temp->next;
	printf("\n%d is deleted",temp->data);
	free(temp);	
	}
	else
	{
		last_delete();
	}
}
}
void search_element() {
    struct node *ptr;
    int key, found = 0;
    if (head == NULL) {
        printf("List is empty");
        return;
    }
else
{
    printf("Enter key value: ");
    scanf("%d", &key);
    ptr = head;

    do {
        if (ptr->data == key) {
            printf("element is found");
            return ;
        }
        
        ptr = ptr->next;
    } while (ptr != head);

    if (!found) {
        printf("Element not found");
    }
}

int main(){
	int ch;

	while(1){
		printf("\n0.exit\n1.create\n2.display\n3.count\n4.lastinsert\n5.firstinsert\n6.anyposinsert\n7.firstdelete\n8.last_delete\n9.anypos_delete\n10.search_element");
		printf("\nenter the choice:");
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
	
		
		case 0:{
			exit(0);
			break;
		}
		case 3:{
			count();
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
		case 7:{
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
		case 10:{
			search_element();
			break;
		}
		default:{
			printf("\nyou entered wrong choice");
			break;
		}
	}
	}
	return 0;
}

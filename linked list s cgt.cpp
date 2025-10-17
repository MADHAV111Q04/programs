#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *head = NULL;

void createlinkedlist() {
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("\nEnter data value in node: ");
    scanf("%d", &temp->data);
    
    if (head == NULL) {
        head = temp;
    } else {
        ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void displaylinkedlist() {
    struct node *ptr = head;
    if (ptr == NULL) {
        printf("\nLinked list is empty\n");
    } else {
        while (ptr != NULL) {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int ch;
    while (1) {
        printf("\n1. Create linked list \n2. Display \n3. Exit \nEnter your choice: ");
        scanf("%d", &ch);
        
        if (ch == 1) {
            createlinkedlist();
        } else if (ch == 2) {
            displaylinkedlist();
        } else if (ch == 3) {
            break;
        } else {
            printf("You entered wrong choice\n");
        }
    }
    return 0;
}


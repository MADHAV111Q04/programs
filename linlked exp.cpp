#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*head=NULL;

void createlinkedlist() {
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("Enter data value in node: ");
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
        return;
    }
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void first_insert() {
    struct node temp = (struct node)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("\nEnter data in first node: ");
    scanf("%d", &temp->data);
    temp->next = head;
    head = temp;
    printf("\nInsert first successful\n");
}

void last_insert() {
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next = NULL;
    printf("Enter the data in last node: ");
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
    printf("Added node at last successfully\n");
}

void first_delete() {
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    printf("Deleted first node successfully\n");
}

void last_delete() {
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return;
    }
    struct node *ptr = head, *prev = NULL;
    while (ptr->next != NULL) {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev != NULL) {
        prev->next = NULL;
    } else {
        head = NULL;
    }
    free(ptr);
    printf("Last node deleted successfully\n");
}

void anypos_insert() {
    int pos, count = 0;
    struct node *temp, *ptr;
    
    ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    
    printf("Enter the data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    
    printf("Enter the position: ");
    scanf("%d", &pos);
    
    if (pos < 1 || pos > count + 1) {
        printf("Invalid position\n");
        free(temp);
        return;
    }
    
    if (pos == 1) {
        temp->next = head;
        head = temp;
    } else {
        ptr = head;
        for (int i = 1; i < pos - 1; i++) {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
    printf("Node inserted at position %d\n", pos);
}

void anypos_delete() {
    int pos, count = 0;
    struct node *ptr = head, *prev = NULL;
    
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return;
    }
    
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    
    printf("Enter the position to delete: ");
    scanf("%d", &pos);
    
    if (pos < 1 || pos > count) {
        printf("Invalid position\n");
        return;
    }
    
    ptr = head;
    if (pos == 1) {
        head = head->next;
        free(ptr);
    } else {
        for (int i = 1; i < pos; i++) {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = ptr->next;
        free(ptr);
    }
    printf("Node deleted at position %d\n", pos);
}

void sum_of_elements() {
    struct node *ptr = head;
    int sum = 0;
    while (ptr != NULL) {
        sum += ptr->data;
        ptr = ptr->next;
    }
    printf("Sum of all elements: %d\n", sum);
}

int main() {
    int ch;
    while (1) {
        printf("\n1. Create Linked List \n2. Display \n3. Insert First\n4. Insert Last \n5. Delete First\n6. Delete Last\n7. Insert at Any Position\n8. Delete at Any Position\n9. Sum of Elements\n10. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1:
                createlinkedlist();
                break;
            case 2:
                displaylinkedlist();
                break;
            case 3:
                first_insert();
                break;
            case 4:
                last_insert();
                break;
            case 5:
                first_delete();
                break;
            case 6:
                last_delete();
                break;
            case 7:
                anypos_insert();
                break;
            case 8:
                anypos_delete();
                break;
            case 9:
                sum_of_elements();
                break;
            case 10:
                exit(0);
            default:
                printf("Wrong choice!\n");
        }
    }
    return 0;
}

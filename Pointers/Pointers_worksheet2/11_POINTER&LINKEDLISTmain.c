/******************************************************************************
11. Pointer and Linked List

Goal:

Implement a singly linked list using pointers for node management and 
dynamic memory allocation.

Activity:

1. Define a node structure with data and next pointer.
2. Log session functions to add nodes at the beginning, end, or middle of 
the list using pointers.
3. Traverse the list using pointers to access and print data.
4. Delete nodes and free memory dynamically
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node*next;
};
struct node*insert_begin(struct node*head,int data) {
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    return newnode;
}
struct node*insert_end(struct node*head,int data) {
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
        return newnode;
    struct node*temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=newnode;
    return head;
}
void display(struct node *head) {
    struct node*temp=head;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
struct node*delete_begin(struct node*head) {
    if(head==NULL)
        return NULL;
    struct node*temp=head;
    head=head->next;
    free(temp);
    return head;
}
int main() {
    struct node *head=NULL;
    head=insert_begin(head,10);
    head=insert_begin(head,5);
    head=insert_end(head,20);
    head=insert_end(head,30);
    printf("Linked List:\n");
    display(head);
    head=delete_begin(head);
    printf("After deletion:\n");
    display(head);
    return 0;
}
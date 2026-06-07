/************************************
 List Rotation Challenges
Question:
Write a C program to rotate a linked list to the right by k places.

Sample data:
List: 1 3 4 7 9
k = 2

Expected output:
Rotated list: 4 7 9 1 3


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* rotate(struct node* head, int k) {
    if (!head || k == 0)
        return head;

    struct node *temp = head;
    int n = 1;

      while (temp->next) {
        temp = temp->next;
        n++;
    }
    temp->next = head;
      k = k % n;
    int steps = n - k;
    temp = head;

      for (int i = 1; i < steps; i++) {
        temp = temp->next;
    }
 struct node* newHead = temp->next;
      temp->next = NULL;
    return newHead;
}

void printList(struct node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct node* newNode(int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main() {
    struct node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Original:\n");
    printList(head);

    head = rotate(head, 2);

    printf("After Rotation:\n");
    printList(head);

    return 0;
}

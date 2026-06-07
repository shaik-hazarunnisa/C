/*Alternate Node Merging Challenges
Question:
Write a C program to merge alternate nodes of two linked lists.
Sample data:
List1: 9 7 5
List2: 10 8 6
Expected output:
Merged list: 9 10 7 8 5 6

 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *a1, *a2, *a3;

    a1 = malloc(sizeof(struct Node));
    a2 = malloc(sizeof(struct Node));
    a3 = malloc(sizeof(struct Node));

    a1->data = 9;
    a2->data = 7;
    a3->data = 5;

    a1->next = a2;
    a2->next = a3;
    a3->next = NULL;
    struct Node *b1, *b2, *b3;

    b1 = malloc(sizeof(struct Node));
    b2 = malloc(sizeof(struct Node));
    b3 = malloc(sizeof(struct Node));

    b1->data = 10;
    b2->data = 8;
    b3->data = 6;

    b1->next = b2;
    b2->next = b3;
    b3->next = NULL;

    struct Node *p = a1;
    struct Node *q = b1;
    while (p != NULL && q != NULL) {

        struct Node* p_next = p->next;
        struct Node* q_next = q->next;

        p->next = q;     
        q->next = p_next;

        p = p_next;
        q = q_next;
    }
    printf("Merged list: ");

    struct Node* temp = a1;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
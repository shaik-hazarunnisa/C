/*Alternate Interleaving Challenges
Question:
Write a C program to interleave two lists alternatively.
Sample data:
List1: 1 3 5
List2: 2 4 6
Expected output:
Result: 1 2 3 4 5 6

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

    a1->data = 1;
    a2->data = 3;
    a3->data = 5;

    a1->next = a2;
    a2->next = a3;
    a3->next = NULL;
    struct Node *b1, *b2, *b3;

    b1 = malloc(sizeof(struct Node));
    b2 = malloc(sizeof(struct Node));
    b3 = malloc(sizeof(struct Node));

    b1->data = 2;
    b2->data = 4;
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
 printf("Result: ");

    struct Node* temp = a1;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
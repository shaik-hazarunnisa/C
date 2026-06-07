/*. Partitioning with Dual Pivots
Question:
Write a C program to partition a linked list around a value x.
Sample data:
List: 3 5 7 5 9 2 1
x = 5
Expected output:
Reordered list: 3 2 1 5 7 5 9

 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *n1, *n2, *n3, *n4, *n5, *n6, *n7;

    n1 = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    n3 = malloc(sizeof(struct Node));
    n4 = malloc(sizeof(struct Node));
    n5 = malloc(sizeof(struct Node));
    n6 = malloc(sizeof(struct Node));
    n7 = malloc(sizeof(struct Node));

    n1->data = 3;
    n2->data = 5;
    n3->data = 7;
    n4->data = 5;
    n5->data = 9;
    n6->data = 2;
    n7->data = 1;
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = NULL;

    struct Node* head = n1;

    int x = 5;
    struct Node *lessHead = NULL, *lessTail = NULL;
    struct Node *greaterHead = NULL, *greaterTail = NULL;

    struct Node* temp = head;

    while (temp != NULL) {

        if (temp->data < x) {
            if (lessHead == NULL) {
                lessHead = lessTail = temp;
            } else {
                lessTail->next = temp;
                lessTail = temp;
            }
        } else {
            if (greaterHead == NULL) {
                greaterHead = greaterTail = temp;
            } else {
                greaterTail->next = temp;
                greaterTail = temp;
            }
        }

        temp = temp->next;
    }
    if (lessTail != NULL)
        lessTail->next = greaterHead;

    if (greaterTail != NULL)
        greaterTail->next = NULL;

    struct Node* newHead = (lessHead != NULL) ? lessHead : greaterHead;
    printf("Reordered list: ");

    temp = newHead;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
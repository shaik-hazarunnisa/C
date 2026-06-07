/*. List Rotation Challenges
Question:
Write a C program to rotate a linked list to the right by k places.
Sample data:
List: 1 3 4 7 9
k = 2
Expected output:
Rotated list: 4 7 9 1 3


 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *n1, *n2, *n3, *n4, *n5;

    n1 = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    n3 = malloc(sizeof(struct Node));
    n4 = malloc(sizeof(struct Node));
    n5 = malloc(sizeof(struct Node));
    n1->data = 1;
    n2->data = 3;
    n3->data = 4;
    n4->data = 7;
    n5->data = 9;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    struct Node* head = n1;

    int k = 2;
    int count = 1;
    struct Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
        count++;
    }
    struct Node* last = temp;

    last->next = head;
    k = k % count; 

    int steps = count - k;

    struct Node* newTail = head;

    for (int i = 1; i < steps; i++) {
        newTail = newTail->next;
    }
    struct Node* newHead = newTail->next;
    newTail->next = NULL;
    printf("Rotated list: ");

    temp = newHead;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
/*Reordering by Parity Challenges
Question:
Write a C program to place all even-numbered nodes after odd-numbered nodes.
Sample data:
List: 1 2 3 4 5 6
Expected output:
Reordered list: 1 3 5 2 4 6

 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *n1, *n2, *n3, *n4, *n5, *n6;

    n1 = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    n3 = malloc(sizeof(struct Node));
    n4 = malloc(sizeof(struct Node));
    n5 = malloc(sizeof(struct Node));
    n6 = malloc(sizeof(struct Node));
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;
    n5->data = 5;
    n6->data = 6;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = NULL;

    struct Node* head = n1;

    struct Node *oddHead = NULL, *oddTail = NULL;
    struct Node *evenHead = NULL, *evenTail = NULL;

    struct Node* temp = head;

    while (temp != NULL) {

        if (temp->data % 2 != 0) {
            if (oddHead == NULL) {
                oddHead = oddTail = temp;
            } else {
                oddTail->next = temp;
                oddTail = temp;
            }
        } else {
            if (evenHead == NULL) {
                evenHead = evenTail = temp;
            } else {
                evenTail->next = temp;
                evenTail = temp;
            }
        }

        temp = temp->next;
    }
    if (oddTail != NULL)
        oddTail->next = evenHead;

    if (evenTail != NULL)
        evenTail->next = NULL;

    struct Node* newHead = (oddHead != NULL) ? oddHead : evenHead;
    printf("Reordered list: ");

    temp = newHead;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
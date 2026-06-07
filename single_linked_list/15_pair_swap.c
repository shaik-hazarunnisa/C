/*14. Pairwise Reversal Challenges
Question:
Write a C program to reverse nodes in pairs.
Sample data:
List: 1 2 3 4 5
Expected output:
Reversed in pairs: 2 1 4 3 5
 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* reverseK(struct Node* head, int k) {

    struct Node *prev = NULL, *curr = head, *next = NULL;
    int count = 0;
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
        head->next = reverseK(next, k);

    return prev;  
}

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

    int k = 3;
    head = reverseK(head, k);
    printf("Reversed: ");
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
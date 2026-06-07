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

int main() {

    struct Node *n1, *n2, *n3, *n4, *n5;

    n1 = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    n3 = malloc(sizeof(struct Node));
    n4 = malloc(sizeof(struct Node));
    n5 = malloc(sizeof(struct Node));
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;
    n5->data = 5;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    struct Node* head = n1;
    struct Node *prev = NULL;
    struct Node *curr = head;

    if (head != NULL && head->next != NULL)
        head = head->next;

    while (curr != NULL && curr->next != NULL) {

        struct Node* nextPair = curr->next->next;
        struct Node* second = curr->next;

        second->next = curr;
        curr->next = nextPair;

        if (prev != NULL)
            prev->next = second;

        prev = curr;
        curr = nextPair;
    }
    printf("Reversed in pairs: ");

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
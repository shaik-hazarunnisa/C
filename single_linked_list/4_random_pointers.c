/*4. Copy with Random Pointers Challenges
Question:
Write a C program to create a deep copy of a singly linked list where each node has a random pointer.
Sample data:
List: 1 2 3 5 7
Random pointers: 1→3, 2→5, 3→7, 5→1, 7→3
Expected output:
New list with same data and random pointers correctly mapped.

 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* random;
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
    n4->data = 5;
    n5->data = 7;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
    n1->random = n3; 
    n2->random = n4; 
    n3->random = n5;
    n4->random = n1;
    n5->random = n3;
    struct Node *temp = n1;

    while (temp != NULL) {
        struct Node* copy = malloc(sizeof(struct Node));

        copy->data = temp->data;
        copy->next = temp->next;

        temp->next = copy;  
        temp = copy->next;
    }
    temp = n1;

    while (temp != NULL) {
        if (temp->random != NULL)
            temp->next->random = temp->random->next;

        temp = temp->next->next;
    }
    struct Node* original = n1;
    struct Node* copyHead = n1->next;
    struct Node* copy = copyHead;

    while (original != NULL) {
        original->next = original->next->next;

        if (copy->next != NULL)
            copy->next = copy->next->next;

        original = original->next;
        copy = copy->next;
    }
    printf("Copied list (data -> random):\n");

    temp = copyHead;
    while (temp != NULL) {
        printf("%d ->%d\n", temp->data, temp->random->data);
        temp = temp->next;
    }

    return 0;
}
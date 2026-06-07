/*. . Linked List Sorting Challenges
Question:
Write a C program to sort a singly linked list using merge sort.
Sample data:
List: 2 3 1 7 5
Expected output:
Sorted list: 1 2 3 5 7

 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* merge(struct Node* a, struct Node* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;

    struct Node* result = NULL;

    if (a->data <= b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }

    return result;
}
void split(struct Node* source, struct Node** front, struct Node** back) {
    struct Node* slow = source;
    struct Node* fast = source->next;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *front = source;
    *back = slow->next;
    slow->next = NULL;
} 
void mergeSort(struct Node** headRef) {
    struct Node* head = *headRef;

    if (head == NULL || head->next == NULL)
        return;

    struct Node *a, *b;
    split(head, &a, &b);

    mergeSort(&a);
    mergeSort(&b);
    *headRef = merge(a, b);
}

int main() {
    struct Node *n1, *n2, *n3, *n4, *n5;

    n1 = malloc(sizeof(struct Node));
    n2 = malloc(sizeof(struct Node));
    n3 = malloc(sizeof(struct Node));
    n4 = malloc(sizeof(struct Node));
    n5 = malloc(sizeof(struct Node));

    n1->data = 2;
    n2->data = 3;
    n3->data = 1;
    n4->data = 7;
    n5->data = 5;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    struct Node* head = n1;

    mergeSort(&head);
    printf("Sorted list: ");
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
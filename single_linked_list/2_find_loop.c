/*#2. Loop Detection Challenges
#Question:
#Write a C program to detect and remove a loop in a singly linked list.
#Sample data:
#List: 1 → 2 → 3 → 4 → 5 → (loop to 2)
#Expected output:
#Loop detected and removed.
#List after removal: 1 2 3 4 5 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node *head, *n2, *n3, *n4, *n5;

    head=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));
    n4=(struct Node*)malloc(sizeof(struct Node));
    n5=(struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;
    n5->data = 5;

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    n5->next = n2;
    struct Node *slow = head, *fast = head;
    int loop = 0;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;          
        fast = fast->next->next;   
        if (slow == fast) {
            loop = 1;
            break;
        }
    }

    if (loop == 0) {
        printf("No loop detected\n");
        return 0;
    }

    printf("Loop detected and removed.\n");

    slow = head;

    struct Node* prev = NULL;

    while (slow != fast) {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }

    prev->next = NULL;
    struct Node* temp = head;
    printf("List after removal: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

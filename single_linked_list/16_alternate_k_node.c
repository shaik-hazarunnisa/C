/*. Alternate K-Node Reversal Challenges
Question:
Write a C program to reverse alternate k nodes.
Sample data:
List: 1 2 3 4 5 6 7 8
k = 2
Expected output:
Reversed: 2 1 3 4 6 5 7 8

 */
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
struct Node* alternateK(struct Node* head, int k) {

	struct Node *curr = head, *prev = NULL, *next = NULL;
	int count = 0;
	while (curr != NULL && count < k) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}
	if (head != NULL)
		head->next = curr;
	count = 0;
	while (count < k - 1 && curr != NULL) {
		curr = curr->next;
		count++;
	}
	if (curr != NULL)
		curr->next = alternateK(curr->next, k);
	return prev;
}

int main() {
	struct Node *n1,*n2,*n3,*n4,*n5,*n6,*n7,*n8;

	n1 = malloc(sizeof(struct Node));
	n2 = malloc(sizeof(struct Node));
	n3 = malloc(sizeof(struct Node));
	n4 = malloc(sizeof(struct Node));
	n5 = malloc(sizeof(struct Node));
	n6 = malloc(sizeof(struct Node));
	n7 = malloc(sizeof(struct Node));
	n8 = malloc(sizeof(struct Node));

	n1->data=1;
	n2->data=2;
	n3->data=3;
	n4->data=4;
	n5->data=5;
	n6->data=6;
	n7->data=7;
	n8->data=8;

	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;
	n6->next=n7;
	n7->next=n8;
	n8->next=NULL;

	struct Node* head = n1;

	int k = 2;

	head = alternateK(head, k);
	printf("Reversed: ");
	struct Node* temp = head;

	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}

	return 0;
}
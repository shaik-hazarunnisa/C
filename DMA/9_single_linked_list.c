/******************************************************************************
Exercise 9: Log Session a Linked List with 3 Nodes
Goal:Apply dynamic memory to build a simple linked list.
Activity:
    • Define a struct for a node with data and next.
    • Use malloc to create 3 nodes dynamically.
    • Link the nodes manually.
    • Traverse and print the list.
    • Free all nodes after traversal.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int main()
{
  struct node *n1,*n2,*n3;
  n1=(struct node*)malloc(1*sizeof(struct node));
   n2=(struct node*)malloc(1*sizeof(struct node));
    n3=(struct node*)malloc(1*sizeof(struct node));
    if (n1 == NULL || n2 == NULL || n3 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    n1->data =10;
    n2->data=20;
    n3->data= 30;

    n1->next =n2;
    n2->next=n3;
    n3->next= NULL;
    struct node *temp;
    temp=n1;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
       
    free(n1);
    free(n2);
    free(n3);

}
   
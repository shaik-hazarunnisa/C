/************************************
11. Nth Node from End Variants
Question:
Write a C program to retrieve the nth node from the end.

Sample data:
List: 1 3 5 11
n = 3
 
Expected output:
Result: 3
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};
int n;
int cnt=0; 
void traverse(struct node*head)
{
    if(head==NULL)
    {
        return;
    }
    traverse(head->next);
    cnt++;
    if(n==cnt)
    {
    printf("%d ",head->data);
    exit(0);
    }
    
}

int main()
{
    struct node l1,l2,l3,l4,l5;
    struct node*head=&l1;
    l1.data = 1;
    l1.next = &l2;
    l2.data = 3;
    l2.next = &l3;
    l3.data = 4;
    l3.next = &l4;
    l4.data = 7;
    l4.next = &l5;
    l5.data = 9;
    l5.next = NULL;
    printf("Enter the nth node\n");
    scanf("%d",&n);
     traverse(head);
     
}
/************************************
 * 0. Adjacent Node Swapping Variants
Question:
Write a C program to swap every two adjacent nodes.

Sample data:
List: 1 2 3 4 5

Expected output:
Swapped list: 2 1 4 3 5
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node *swap(struct node*head)
{
    struct node *temp=head;
    int t;
    if(head==NULL)
    {
        return NULL;
    }
    while((temp!=NULL)&&(temp->next!=NULL))
    {
        t=temp->data;
        temp->data=temp->next->data;
        temp->next->data=t;
        temp=temp->next->next;
    }
    return head;
}

int main()
{
    struct node l1,l2,l3,l4;
    struct node*head=&l1;
    l1.data = 1;
    l1.next = &l2;
    l2.data = 3;
    l2.next = &l3;
    l3.data = 4;
    l3.next = &l4;
    l4.data = 7;
    l4.next = NULL;
     swap(head);
     while(head)
     {
        printf("%d ",head->data);
        head=head->next;
     }
}

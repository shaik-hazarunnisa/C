/************************************
 Kth Node Swapping Variants
Question:
Write a C program to swap Kth node from beginning and end.

Sample data:
List: 1 2 3 4 5
k = 2
Expected output:
Swapped list: 1 4 3 2 5
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


struct node *temp;
 int k;
 int cnt=0;
 void swap_kth(struct node*head)
{
    int t;
    if(head==NULL)
    {
        return;
    }
    swap_kth(head->next);
    cnt++;
    if(k==cnt)
    {
        t=head->data;
        head->data=temp->data;
        temp->data=t;
    }
    temp=temp->next;
    
}
int main()
{
    struct node l1,l2,l3,l4;
    struct node*head=&l1;
    int n;
    l1.data = 1;
    l1.next = &l2;
    l2.data = 3;
    l2.next = &l3;
    l3.data = 2;
    l3.next = &l4;
    l4.data = 1;
    l4.next = NULL;
    temp=head;
    printf("Enter the node to swap");
    scanf("%d",&k);
    swap_kth(head);
    while(head)
    {
        printf("%d ",head->data);
        head=head->next;
    }

}
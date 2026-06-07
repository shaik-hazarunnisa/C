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

 
 struct node *rotate(struct node*head)
{
    struct node *temp1=head;
    int k,j=0,len;
    if(head==NULL)
    {
        printf("List is empty\n");
    }
    printf("Enter the number kth node:");
    scanf("%d",&k);
    while(temp1)
    {
        len++;
        temp1=temp1->next;
    }
    
    
    return head;
    
}
int main()
{
    struct node l1,l2,l3,l4,l5;
    struct node*head=&l1;
    int n;
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
     head=rotate(head);
     while(head)
     {
         printf("%d ",head->data);
         head=head->next;
     }
    
}
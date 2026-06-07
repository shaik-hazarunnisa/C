/************************************
 Intersection Finder Variants
Question:
Write a C program to find the intersection point of two singly linked lists.

Sample data:
List A: 1 2 → 3 4
List B: 5 → 3 4

Expected output:
Intersection found at node with data: 3

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

 void intersection(struct node*head1,struct node*head2)
{
     struct node *temp1=head1; 
     struct node *temp2=head2;
    if((head1==NULL)||(head2==NULL))
    {
       printf("List is empty:\n");
    }
    while(temp1)
    
    {   temp2=head2;
        while(temp2)
        {
            if(temp1->data==temp2->data)
            {
                printf("Intersection happened at node with value %d",temp1->data);
                exit(0);
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    
}
int main()
{
    struct node n1,n2,n3,n4;
    struct node l1,l2,l3,l4;
     struct node*head1=&n1,*head2=&l1;
    int n;
    n1.data = 1;     
    n1.next = &n2;
    n2.data = 2;
    n2.next = &n3;
    n3.data = 3;
    n3.next = &n4;
    n4.data = 4;
    n4.next = NULL;
    
     l1.data = 5;
    l1.next = &l2;
    l2.data = 3;
    l2.next = &l3;
    l3.data = 4;
    l3.next = &l4;
    l4.data = 5;
    l4.next = NULL;
    
    intersection(head1,head2);
    
}
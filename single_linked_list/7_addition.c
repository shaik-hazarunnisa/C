/************************************
 Linked List Addition Variants
Question:
Write a C program to add two numbers represented by linked lists.

Sample data:
List 1: 8 7 9 2
List 2: 2 1 2 3

Expected output:
Result: 0 9 1 6 (carry handled)
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
     struct node *temp1 = head1; 
     struct node *temp2 = head2;
     
     int sum=0,carry=0,r=0;
    if((head1==NULL)||(head2==NULL))
    {
       printf("List is empty:\n");
    }
    while(temp1)
    
    { 
       sum= temp1->data + temp2->data + r;
        if(sum>9)
        {
            r  = sum%10;
            printf("%d ",r);
            sum/=10;
            r = sum%10;
        }
        else
        {
        printf("%d ", sum);
        r=0;
        }
        temp2 = temp2->next;
        
        temp1 = temp1->next;
    }
    
}
int main()
{
    struct node n1,n2,n3,n4;
    struct node l1,l2,l3,l4;
     struct node*head1=&n1,*head2=&l1;
    int n;
    n1.data = 8;     
    n1.next = &n2;
    n2.data = 7;
    n2.next = &n3;
    n3.data = 9;
    n3.next = &n4;
    n4.data = 2;
    n4.next = NULL;
    
     l1.data = 2;
    l1.next = &l2;
    l2.data = 1;
    l2.next = &l3;
    l3.data = 2;
    l3.next = &l4;
    l4.data = 3;
    l4.next = NULL;
    
    intersection(head1,head2);
    
}
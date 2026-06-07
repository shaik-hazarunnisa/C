/************************************
 Merging K Sorted Lists Challenges
Question:
Write a C program to merge K sorted linked lists.

Sample data:
List-1: 10 20 50
List-2: 30 40 60
List-3: 10 70 100

Expected output:
Merged list: 10 10 20 30 40 50 60 70 100
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};



 int cnt=0;
 void swap_kth(struct node*head1,struct node*head2,struct node*head3)
{
    struct node*temp;
    temp=node;
    if(head==NULL)
    {
        return;
    }
    while((head1!=NULL)||(head2!=NULL)||(head3!=NULL))
    {
        if(head)
    }
    
}
int main()
{
    struct node l1,l2,l3;
     struct node n1,n2,n3;
      struct node m1,m2,m3;
    struct node*head1=&l1;
    struct node*head2=&n1;
    struct node*head3=&m1;
    int n;
    l1.data = 10;
    l1.next = &l2;
    l2.data = 20;
    l2.next = &l3;
    l3.data = 50;
    l3.next = NULL;
    
     n1.data = 1;
    n1.next = &n2;
    n2.data = 3;
    n2.next = &n3;
    n3.data = 2;
    n3.next = NULL;
    
     m1.data = 10;
    m1.next = &m2;
    m2.data = 70;
    m2.next = &m3;
    m3.data = 80;
    m3.next = NULL;
    
    sort(head1,head2,head3);
    while(head)
    {
        printf("%d ",head->data);
        head=head->next;
    }

}
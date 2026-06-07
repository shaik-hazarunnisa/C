/************************************
 Loop Detection Challenges
Question:
Write a C program to detect and remove a loop in a singly linked list.

Sample data:
List: 1 → 2 → 3 → 4 → 5 → (loop to 2)

Expected output:
Loop detected and removed.
List after removal: 1 2 3 4 5


*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int cnt=0;

struct node
{
    int data;
    struct node *next;
};
/*
struct node*loop(struct node*head)
{
    int i=0,flag=0;
    struct node *temp1,*temp2;
    temp1=head;
    temp2=head;
    
    if(head==NULL)
    {
        printf("No Nodes in the list");
        
        return 0;
    }
    reverse(head);
    return head;
} */

struct node *temp;
 
 void rev(struct node*head)
{
   // static struct node *temp=head; 
    if(head==NULL)
    {
        return;
    }
    rev(head->next);
    if(temp->data!=head->data)
    {
       cnt++;
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
    rev(head);
    if(cnt==0)
    {
        printf("palindrome");
    }
    else
        printf("Not a palindrome");
}
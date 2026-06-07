/******************************************************************************

1. Merge Sorted Lists Challenges
Question:
Write a C program to merge two sorted singly linked lists into a single sorted linked list.
Sample data:
List 1: 1 3 5 7
List 2: 2 4 6
Expected output:
Merged list: 1 2 3 4 5 6 7

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node*add_first_(struct node*head)
{
    struct node*newnode;
    newnode=(struct node*)malloc(1*sizeof(struct node));
    printf("Enter the value:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
    return head;
}

struct node* sort(struct node*head1,struct node*head2)
{
   struct node*temp1,*temp2;
   temp1=head1;
   temp2=head2;
   
    int cnt=0;
   while(temp1->next!=NULL)
   {
        
        temp1=temp1->next;
       
   }
   temp1->next=temp2;
    
        temp1=temp1->next; 
/*   while(temp2)
   {
        temp1->data=temp2->data;
        temp1->next=temp2->next;
         temp1=temp1->next; 
          temp2=temp2->next; 
   }*/
   return head1;
}

int main()
{
    struct node *list1=NULL,*list2=NULL,*sorted=NULL;
    int n;
    while(1)
    {
    printf("1.list1 2.list2 3.sort 4.print 5.exit");
    scanf("%d",&n);
    switch(n)
    {
        case 1:list1=add_first_input(list1);
               break;
        case 2:list2=add_first_(list2);
               break;
        case 3:sorted=sort(list1,list2);
               break;
        case 4: while(sorted)
                {
                printf("%d",sorted->data);
                sorted=sorted->next;
                }
                break;
        case 5:exit(0);
    }
    } 
    while(sorted)
    {
        printf("%d",sorted->data);
        sorted=sorted->next;
    }
}
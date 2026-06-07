/************************************
 * Halving the List Challenges
Question:
Write a C program to split a list into two halves.

Sample data:
List: 1 2 3 4 5 6

Expected output:
First half: 1 2 3
Second half: 4 5 6
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

void half(struct node*head)
{
    struct node *temp=head;
    int len=0,cnt=0;
    if(head==NULL)
    {
        return;
    }
    while(temp)
    {
        len++;
        temp=temp->next;
    }
    len=(len/2)+1;
    temp=head;
    printf("First half:\n");
    while(temp)
    {
        cnt++;
        if(cnt==len)
        {
            printf("\nsecond half:\n");
        }
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
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
    l3.data = 4;
    l3.next = &l4;
    l4.data = 7;
    l4.next = NULL;
     half(head);
     
}

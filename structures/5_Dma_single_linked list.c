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

void print(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct node *list1=NULL;
    int n;
    while(1)
    {
    printf("1.add 2.print");
    scanf("%d",&n);
    switch(n)
    {
        case 1:list1=add_first_(list1);
               break;
        case 2:print(list1);
        case 3:exit(0);
    }
    } 
  
}
/******************************************************************************
Exercise 3: Zero-Initialize an Integer Array
Goal:Understand how calloc initializes memory.
Activity:
    • Ask the user for the number of elements.
    • Allocate memory using calloc.
    • Print the initial values (before user input).
    • Assign values, then display them.
    • Free the memory after use.


*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
void print(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
       printf("%d ",p[i]);
    }
   
}
int main()
{
    int *arr;
    int i,n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=calloc((n),sizeof(int));
    print(arr,n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      print(arr,n);
    free(arr);
    
}
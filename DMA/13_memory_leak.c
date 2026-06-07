/******************************************************************************
Exercise 13: Memory Leak Simulation
Goal:Understand what a memory leak is.
Activity:
    • Allocate memory using malloc and assign values.
    • Intentionally skip free().
    • Run the program with tools like valgrind to observe the leak.
    • Fix the leak by adding proper free().

*****************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
     for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
   
}
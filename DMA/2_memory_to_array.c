/******************************************************************************
GGoal:Practice allocating memory for an array of integers.
Activity:
    • Ask the user to enter the number of integers.
    • Allocate memory dynamically using malloc based on input.
    • Use a loop to take integer inputs into the allocated array.
    • Display the entered values.
    • Free the allocated memory.


*******************************************************************************/
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
    free(arr);
    
}
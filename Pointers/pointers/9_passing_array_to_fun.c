/******************************************************************************
9. Passing Array to Function
Goal: Learn how arrays are passed to functions as pointers.
Activity:
    • Write void display(int *arr, int n);
    • Inside the function, loop using pointer arithmetic to print elements.
    ************************************/
#include <stdio.h>

void display(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i)); 
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
   display(arr,n);  

    return 0;
}
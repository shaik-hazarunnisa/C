/******************************************************************************
Exercise 19: Dynamic Array of Pointers to Integers
Goal: Work with array of pointers using malloc.
Activity:
    • Ask user for count.
    • Allocate array of int* pointers.
    • Use malloc to assign an integer for each pointer.
    • Assign and print values.
    • Free all integers and the array.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int**)malloc(n * sizeof(int*));
    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for(i = 0; i < n; i++)
    {
        arr[i] = (int*)malloc(sizeof(int));

        if(arr[i] == NULL)
        {
            printf("Memory allocation failed at index %d\n", i);
            return 1;
        }

        printf("Enter value for element %d: ", i);
        scanf("%d", arr[i]);  
        }
    printf("\nStored values:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
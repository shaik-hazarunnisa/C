/******************************************************************************
Exercise 17: Struct Array with Dynamic Allocation
Goal: Allocate memory for array of structs.
Activity:
    • Define a struct (e.g., name and age).
    • Ask user how many entries to store.
    • Allocate memory using malloc.
    • Accept values and display them.
    • Free the memory.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

       if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position less then %d: ", n);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);
    if(pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
        free(arr);
        return 1;
    }
    n++;
    arr = (int*)realloc(arr, n * sizeof(int));

    if(arr == NULL)
    {
        printf("Reallocation failed!\n");
        return 1;
    }
    for(i = n - 1; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    printf("Updated array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}
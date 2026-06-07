/******************************************************************************
6. Array Index vs Pointer Arithmetic
Goal: Understand that arr[i] and *(arr + i) give the same result.
Activity:
    • Use both arr[i] and *(arr + i) to print array elements.
    • Confirm outputs are the same.
    ************************************/
#include <stdio.h>

int main()
{
    int arr[5] ={10,20,30,40,50};

    printf("Using array indexing:\n");
    for(int i =0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
     printf("Using pointer arithmetic:\n");
    for(int i =0; i<5;i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}
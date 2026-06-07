/******************************************************************************
Exercise 16: Safe Memory Allocation Check
Goal: Practice error-checking after allocation.
Activity:
    • Try allocating a large chunk of memory (e.g., 1GB).
    • Check if the pointer is NULL.
    • If successful, print a success message.
    • If failed, handle the error gracefully.
    • Free if allocation succeeded.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=1024*1024*1024; 

    char *ptr=(char*)malloc((size)*sizeof(char));
   if(ptr==NULL)
    {
        printf("Memory allocation failed!\n");
    }
    else
    {
        printf("Memory allocation successful (1GB allocated).\n");
        free(ptr);
        printf("Memory freed successfully.\n");
    }

    return 0;
}

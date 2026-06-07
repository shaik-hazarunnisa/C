/******************************************************************************
Goal: Understand how to allocate memory for a single variable using malloc.
Activity:
    • Log Session a pointer to an integer.
    • Use malloc to allocate memory for one integer.
    • Assign a value to that memory.
    • Print the value through the pointer.
    • Free the allocated memory.
    • Include NULL check after malloc.


*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
   int *ptr;
   ptr=malloc(1*sizeof(int));
   if(ptr==NULL)
   {
       printf("Memory not allocated");
       return 0;
   }
   *ptr=10;
   printf("%d",*ptr);
   free(ptr);
    return 0;
}

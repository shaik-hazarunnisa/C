/******************************************************************************
Exercise 5: Reallocate an Array Dynamically
Goal:Use realloc to extend an array as needed.
Activity:
    • Allocate memory for 2 integers.
    • Ask the user for values.
    • Then resize the array to 5 integers using realloc.
    • Accept more values into the resized array.
    • Print all values.
    • Free the memory at the end.

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
   printf("\n");
}
int main()
{
    int *arr1;
    int i=0,cnt=2;
    arr1=malloc(2*sizeof(int));
    printf("Enter the elements");
    for(i=0;i<2;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter three more elements");
    arr1=realloc(arr1,5*sizeof(int));
    for(i;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    print(arr1,5);
    free(arr1);
}
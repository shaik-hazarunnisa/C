/******************************************************************************
xercise 4: Compare malloc and calloc
Goal:Learn the key difference between malloc and calloc.
Activity:
    • Allocate two arrays using malloc and calloc with the same size.
    • Print the default values in both arrays.
    • Use a loop for printing to understand initialization differences.
    • Free both arrays.

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
    int *arr1,*arr2;
    int i,n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
     arr1=malloc((n)*sizeof(int));
    arr2=calloc((n),sizeof(int));
    print(arr1,n);
    
    print(arr2,n);
    free(arr1);
     free(arr2);
}
/******************************************************************************
Goal:Use pointers to reverse dynamically allocated memory.
Activity:
    • Allocate an array of integers using malloc.
    • Accept n values.
    • Reverse the array using pointer arithmetic (not indexing).
    • Print reversed values.
    • Free the memory.


*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
void rev(int *p,int size)
{
    int i,j,temp;
     for(i=0,j=(size-1);i<j;i++,j--)
    {
     temp=p[i];
     p[i]=p[j];
     p[j]=temp;
    }
}
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
    rev(arr,n);
     for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
    free(arr);
    
}
   
   
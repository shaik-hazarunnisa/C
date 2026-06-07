/******************************************************************************
Question 9: Reverse Array using Pointer Arithmetic
Task:Write a function that reverses an integer array in place using pointer arithmetic only (no array indexing).
Sample data:

int arr[] = {1, 2, 3, 4, 5};
Expected output:
Reversed array: 5 4 3 2 1
*******************************************************************************/
#include <stdio.h>

void rev(int *p,int size)
{
    int i,j,temp;
    for(i=0,j=(size-1);i<j;i++,j--)
    {
        temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }
    
}

void print(int *p,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",*(p+i));
    }
}
int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   int n;
   n=sizeof(arr)/sizeof(arr[0]);
   rev(arr,n);
   print(arr,n);
   return 0;
}
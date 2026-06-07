/******************************************************************************
Callback Function Array Processing
Define a function processArray that accepts an integer array, its size, and a callback function as arguments.
Implement callback functions (increment, doubleValue) that modify array elements in different ways.
Demonstrate invoking processArray with different callback functions.

*******************************************************************************/

#include <stdio.h>

void increment(int *x) 
{
     (*x)++ ;
}
void doubleValue(int *x)
{
    (*x)*=2;
}

void processArray(int *p,int size,void (*callback)(int *))
{
    int i;
    for(i = 0;i < size; i++)
    {
        callback(&p[i]);
    }
    
}

void print(int *p,int size)
{
    int i;
    for(i = 0;i < size; i++)
    {
       printf("%d ",p[i]);
    }
    printf("\n");
}
int main() {
    int arr[5]={1,2,3,4,5};
    int l;
    l=sizeof(arr)/sizeof(arr[0]);
    
    printf("Original array\n");
    print(arr,l);
    
    processArray(arr,l,increment);
    printf("Array after increment:\n");
    print(arr,l);
    
    processArray(arr,l,doubleValue);
    printf("Array after doubling the value:\n");
    print(arr,l);
    
    return 0;
}
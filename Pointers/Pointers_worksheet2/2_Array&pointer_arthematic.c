/******************************************************************************
2.Array and Pointer Arithmetic

Goal: Traverse and manipulate arrays by using pointers and pointer arithmetic 
instead of array indexing.

Activity:

1.Log session an array of integers.
2.Use a pointer to iterate through the array elements by incrementing the pointer.
3.Perform operations like summing the elements or modifying them using only the 
pointer (no array indices).
4.Implement a function that receives a pointer and size to reverse the array 
elements in place.
*******************************************************************************/
#include <stdio.h>
void reverse(int *ptr, int n) {
    int *start=ptr;
    int *end=ptr+n-1;
    while(start<end) {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *ptr=arr;
    printf("Array elements:\n");
    for(int i= 0; i<n;i++) {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    int sum=0;
    for(int i=0;i<n;i++) {
        sum+=*(ptr+i);
    }
    printf("Sum = %d\n",sum);
    for(int i=0;i<n;i++) {
        *(ptr+i)*=2;
    }
    printf("Modified array:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    reverse(ptr,n);
    printf("Reversed array:\n");
    for(int i=0; i<n;i++) {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
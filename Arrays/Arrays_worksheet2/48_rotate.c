/******************************************************************************
  48. Rotate array by k positions
    Question description:
    Write a C program to rotate the elements of an array by k positions to the right.
    Sample data:
    Input: 1 2 3 4 5 k = 2
    Expected output:
    Output: 4 5 1 2 3
*******************************************************************************/
#include <stdio.h>
void reverse(int arr[],int start,int end) {
    while(start<end) {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main() {
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("Output: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
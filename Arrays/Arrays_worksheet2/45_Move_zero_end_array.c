/******************************************************************************
    45. Move all zeros to end of array
    Question description:
    Write a C program to move all zeros in the array to the end while maintaining the order of non-zero elements.
    Sample data:
    Input: 1 0 2 0 0 3 4
    Expected output:
    Output: 1 2 3 4 0 0 0
*******************************************************************************/
#include <stdio.h>
int main() {
    int arr[]={1, 0, 2, 0, 0, 3, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0; i<n;i++) {
        if(arr[i]!=0) {
            arr[j++]=arr[i];
        }
    }
    while(j<n) {
        arr[j++]=0;
    }
    printf("Output: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
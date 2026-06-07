/******************************************************************************
34. Find leader elements in array
    Question description:
    Write a C program to find all leader elements in the array (elements greater than all elements to their right).
    Sample data:
    Input: 16 17 4 3 5 2
    Expected output:
    Leader elements: 17 5 2

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[n-1];
     printf("Leader elements: %d",max);

    for(int i=n-2;i>=0;i--) {
        if(arr[i] > max) {
            printf("%d ",arr[i]);
            max=arr[i];
        }
    }

    return 0;
}
}
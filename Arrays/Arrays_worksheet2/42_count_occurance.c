/******************************************************************************
    42. Count occurrences of a number
    Question description:
    Write a C program to count how many times a specific number appears in an array.
    Sample data:
    Input array: 1 2 3 2 2 5 Number to count: 2
    Expected output:
    Number 2 occurs 3 times
*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 2, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=2;
    int cnt=0;

    for(int i=0; i<n; i++) {
        if(arr[i]==key) {
            cnt++;
        }
    }

    printf("Number %d occurs %d times\n", key, cnt);

    return 0;
}
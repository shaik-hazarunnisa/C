/******************************************************************************
    40. Find the maximum difference between two elements such that larger element appears after the smaller
    Question description:
    Write a C program to find the maximum difference between two elements in an array such that the larger element appears after the smaller element.
    Sample data:
    Input: 2 3 10 6 4 8 1
    Expected output:
    Maximum difference: 8 (10 - 2)
*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];
    int max= arr[1] - arr[0];

    for(int i = 1; i < n; i++) {
        int diff = arr[i] - min;

        if(diff>max) {
            max = diff;
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum difference: %d\n", max);

    return 0;
}
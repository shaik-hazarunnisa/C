/******************************************************************************
    39.ind product of all elements
    Question description:
    Write a C program to find the product of all elements in the array.
    Sample data:
    Input: 1 2 3 4
    Expected output:
    Product: 24

*******************************************************************************/
#include <stdio.h>

int main() {
int arr[] = {1, 2, 3, 4};
    int n =sizeof(arr)/sizeof(arr[0]);

    int pro=1;

    for(int i = 0;i < n; i++) {
        pro*= arr[i];
    }

    printf("Product: %d\n", pro);

    return 0;
}

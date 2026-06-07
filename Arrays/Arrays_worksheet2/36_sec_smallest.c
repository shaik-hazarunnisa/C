/******************************************************************************
  36. Find second smallest element
    Question description:
    Write a C program to find the second smallest element in the array.
    Sample data:
    Input: 12 13 1 10 34 1
    Expected output:
    Second smallest element is 10

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[6]={12, 13, 1, 10, 34, 1};
    int n=sizeof(arr)/sizeof(arr[0]);

    int small=100,sec_small=100;

    for(int i =0;i<n;i++) {
        if(arr[i] < small) {
            sec_small= small;
            small=arr[i];
        }
        else if(arr[i] > small&&arr[i] < sec_small) {
            sec_small= arr[i];
        }
    }

        printf("Second smallest element is %d\n", sec_small);
   

    return 0;
}
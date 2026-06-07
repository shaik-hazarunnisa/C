/******************************************************************************
    43. Find two elements whose sum is closest to zero
    Question description:
    Write a C program to find two elements whose sum is closest to zero.
    Sample data:
    Input: 1 60 -10 70 -80 85
    Expected output:
    Pair whose sum is closest to zero: -80 85
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int arr[]={1, 60, -10, 70, -80, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    qsort(arr, n, sizeof(int), compare);
    int left=0, right=n-1;
    int min_sum=1000000;
    int min_l=left, min_r=right;
    while(left < right) {
        int sum=arr[left] + arr[right];

        if(abs(sum) < abs(min_sum)) {
            min_sum=sum;
            min_l=left;
            min_r=right;
        }
        if(sum < 0)
            left++;
        else
            right--;
    }
    printf("Pair whose sum is closest to zero: %d %d\n", arr[min_l], arr[min_r]);
    return 0;
}
/******************************************************************************
33. Find subarray with maximum sum (Kadane’s Algorithm)
    Question description:
    Write a C program to find the maximum sum of a contiguous subarray.
    Sample data:
    Input: -2 -3 4 -1 -2 1 5 -3
    Expected output:
    Maximum contiguous sum is 7

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);

    int max_sum=arr[0],curr_sum=0;
    for(int i=0;i<n;i++) {
        curr_sum+=arr[i];
        if(curr_sum>max_sum) {
            max_sum=curr_sum;
        }
if(curr_sum < 0) {
            curr_sum = 0;
        }
    }

    printf("Maximum contiguous sum is %d\n", max_sum);
}
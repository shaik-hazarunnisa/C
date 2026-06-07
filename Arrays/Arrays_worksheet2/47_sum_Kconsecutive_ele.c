/******************************************************************************
   47. Find maximum sum of k consecutive elements
    Question description:
    Write a C program to find maximum sum of k consecutive elements in an array.
    Sample data:
    Input: 2 3 4 1 5 6 7 k = 3
    Expected output:
    Maximum sum of 3 consecutive elements: 18
*******************************************************************************/
#include <stdio.h>
int main() {
    int arr[]={2,3,4,1,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int max_sum=0;
    int normal_sum=0;
    for(int i=0; i<k;i++) {
        normal_sum+=arr[i];
    }
    max_sum=normal_sum;
    for(int i=k;i<n;i++) {
        normal_sum=normal_sum-arr[i-k]+arr[i];
        if(normal_sum>max_sum) {
            max_sum=normal_sum;
        }
    }
    printf("Maximum sum of %d consecutive elements: %d\n", k, max_sum);

    return 0;
}
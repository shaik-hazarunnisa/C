/******************************************************************************
 50. Find the missing two numbers in an array
    Question description:
    Write a C program to find two missing numbers from an array containing numbers from 1 to n+2.
    Sample data:
    Input: 1 2 4 6
    Expected output:
    Missing numbers: 3 5
*******************************************************************************/
#include <stdio.h>
int main() {
    int arr[]={1,2,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int total_n=n + 2;
    int total_sum=total_n*(total_n+ 1)/2;
    int arr_sum=0;
    for(int i=0;i<n;i++) {
        arr_sum+=arr[i];
    }
    int miss=total_sum-arr_sum;
    int avg=miss / 2;
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<=avg)
            sum1+=arr[i];
        else
            sum2+=arr[i];
    }
    int total1=avg*(avg+ 1)/2;
    int total2=total_sum-total1;
    int x=total1-sum1;
    int y=total2-sum2;
    printf("Missing numbers: %d %d\n",x,y);
    return 0;
}
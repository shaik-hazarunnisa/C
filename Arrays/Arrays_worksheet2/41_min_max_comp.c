/******************************************************************************
    41. Find the minimum and maximum element using minimum comparisons
    Question description:
    Write a C program to find minimum and maximum elements using minimum number of comparisons.
    Sample data:
    Input: 1000 11 445 1 330 3000
    Expected output:
    Minimum element is 1 Maximum element is 3000
*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int n = sizeof(arr)/sizeof(arr[0]);

    int min, max;
    int i;
    if(n % 2 == 0) {
        if(arr[0] > arr[1]) {
            max=arr[0];
            min=arr[1];
        } else {
            max=arr[1];
            min=arr[0];
        }
        i = 2;
    } 
    else
    { min=max=arr[0];
        i = 1;
    }
    while(i < n - 1) {
        if(arr[i] > arr[i+1]) {
            if(arr[i] > max)
                max=arr[i];
            if(arr[i+1] < min)
                min=arr[i+1];
        } else {
            if(arr[i+1] > max)
                max=arr[i+1];
            if(arr[i] < min)
                min=arr[i];
        }
        i += 2;
    }
    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d\n", max);

    return 0;
}
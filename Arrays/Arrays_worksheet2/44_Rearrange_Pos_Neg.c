/******************************************************************************
   44. Rearrange positive and negative numbers
    Question description:
    Write a C program to rearrange an array so that positive and negative numbers are placed alternatively.
    Sample data:
    Input: 1 2 3 -4 -1 4
    Expected output:
    Rearranged array: -4 1 -1 2 3 4
*******************************************************************************/
#include <stdio.h>
int main() {
    int arr[]={1, 2, 3, -4, -1, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos[100], neg[100];
    int p=0,q=0;
    for(int i=0; i<n; i++) {
        if(arr[i]>=0)
            pos[p++]=arr[i];
        else
            neg[q++]=arr[i];
    }
    int i=0,j=0,k=0;
    while(i<q&&j<p) {
        arr[k++]=neg[i++];
        arr[k++]=pos[j++];
    }
    while(i<q)
        arr[k++]=neg[i++];
    while(j<p)
        arr[k++] = pos[j++];
    printf("Rearranged array: ");
    for(int x = 0; x < n; x++) {
        printf("%d ", arr[x]);
    }
    return 0;
}
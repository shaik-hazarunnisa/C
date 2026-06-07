/*Question: Merge two arrays
Question description: Write a C program to merge two arrays into a third array.
Sample data:
Array 1: 1 2 3
Array 2: 4 5 6
Expected output:
Merged array: 1 2 3 4 5 6*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={1,2,3};
    int arr2[]={4,5,6},*A;
    int i,l,l2,k=0;
    l=(sizeof(arr)/sizeof(arr[0]));
    l2=(sizeof(arr2)/sizeof(arr2[0]));
    A=malloc((l+l2)*sizeof(int));
    for(i=0;i<l;i++)
    {
        A[k]=arr[i];
        k++;
    }
    for(i=0;i<l2;i++)
    {
        A[k]=arr2[i];
        k++;
    }
    printf("combined array:");
    for(i=0;i<k;i++)
    {
        printf("%d ",A[i]);
    }
}

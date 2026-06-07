/******************************************************************************
5.Dynamic memory Allocation

Goal:

Allocate, reallocate, and free memory dynamically for different data types and 
structures while avoiding memory leaks.

Activity:

1. Allocate memory for an array using malloc.
2. Expand or shrink the allocated memory using realloc.
3. Initialize the allocated memory using calloc.
4. Free allocated memory after use.
5. Handle cases where allocation fails.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n=3;
    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i<n;i++) {
        arr[i]=i+1;
    }
    printf("Using malloc:\n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    n=5;
    arr=(int *)realloc(arr, n*sizeof(int));
    if(arr==NULL) {
        printf("Reallocation failed\n");
        return 1;
    }
    for(int i=3; i<n;i++) {
        arr[i]=i+1;
    }
    printf("After realloc:\n");
    for(int i=0; i<n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int *arr2=(int*)calloc(n,sizeof(int));
    if(arr2==NULL) {
        printf("Calloc failed\n");
        free(arr);
        return 1;
    }
    printf("Using calloc (initialized to 0):\n");
    for(int i=0;i<n;i++) {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    free(arr);
    free(arr2);
    return 0;
}
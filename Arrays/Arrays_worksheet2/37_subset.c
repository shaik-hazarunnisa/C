/******************************************************************************
 37. Check if array is subset of another
    Question description:
    Write a C program to check if one array is a subset of another array.
    Sample data:
    Array 1: 1 2 3 4 5 Array 2: 2 4 5
    Expected output:
    Array2 is a subset of Array1

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr1[]= {1, 2, 3, 4, 5};
    int arr2[]= {2, 4, 5},n1,n2;
   n1=sizeof(arr1)/sizeof(arr1[0]);
   n2=sizeof(arr2)/sizeof(arr2[0]);

    int flag,Subset = 1;

    for(int i = 0; i < n2; i++) {
        flag=0;

        for(int j = 0;j<n1;j++) {
            if(arr2[i]==arr1[j]) {
                flag=1;
                break;
            }
        }
        if(!flag) 
        {
            Subset = 0;
            break;
        }
    }

    if(Subset)
        printf("Array2 is a subset of Array1\n");
    else
        printf("Array2 is NOT a subset of Array1\n");

    return 0;
}
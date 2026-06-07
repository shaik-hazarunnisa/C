/*Question: Copy array elements
Question description: Write a C program to copy all elements from one array to another.
Sample data:
Input: 1 2 3 4 5
Expected output:
Copied array: 1 2 3 4 5*/
#include<stdio.h>
int main()
{
    int arr[5],i,copied_array[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        copied_array[i]=arr[i];
    }
    printf("copied_array: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",copied_array[i]);
    }
}

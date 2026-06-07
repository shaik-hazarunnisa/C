/*Question: Delete element at position
Question description: Write a C program to delete a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Delete at position: 2
Expected output:
Array after deletion: 10 20 40*/
#include<stdio.h>
#include<string.h>
int main()
{
    int arr[4],i,l,n;
    printf("Enter the elements:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position:");
    scanf("%d",&n);
    l=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<l;i++)
    {
        if(i==n)
        {
            memmove(&arr[i],&arr[i+1],((l-(i+1))*sizeof(int)));
            break;
        }
    }
    printf("array after deletion:");
    for(i=0;i<(l-1);i++)
    {
        printf("%d ",arr[i]);
    }
}

/*Question: Left rotate array by n
Question description: Write a C program to rotate an array to the left by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 3 4 5 1 2*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *arr,*a;
    int i,n,m,k=0,j;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter no of positions to shift:");
    scanf("%d",&m);
    a=malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    {
           a[k]=arr[i];
           k++;
       
    }
    memmove(&arr[0],&arr[m],(n-m)*sizeof(int));
    j=n-m;
    for(i=0;i<k;i++)
    {
        arr[j]=a[i];
        j++;
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

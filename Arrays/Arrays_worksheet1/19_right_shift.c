/*Question: Right rotate array by n
Question description: Write a C program to rotate an array to the right by n positions.
Sample data:
Array: 1 2 3 4 5
Rotate by: 2
Expected output:
Rotated array: 4 5 1 2 3*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *arr,*a;
    int i,n,m,k=0;
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
    for(i=0;i<n;i++)
    {
       if(i>(n-1-m))
       {
           a[k]=arr[i];
           k++;
       }
       
    }
    memmove(&arr[2],&arr[0],(n-2)*sizeof(int));
    for(i=0;i<k;i++)
    {
        arr[i]=a[i];
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

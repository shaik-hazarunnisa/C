/*Question: Split array into halves
Question description: Write a C program to split the array into two halves and print them separately.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
First half: 1 2 3
Second half: 4 5 6*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,j;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=n/2;
    for(i=0;i<n;i++)
    {
        if(i==j)
        printf("\n");
        printf("%d",arr[i]);
    }
    
}
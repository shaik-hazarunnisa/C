/*Question: Find duplicate elements
Question description: Write a C program to find all duplicate elements in an array.
Sample data:
Input: 1 2 3 2 4 1
Expected output:
Duplicate elements: 1 2*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *arr;
    int i,n,j,l,cnt=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
            }
        }
    }

}
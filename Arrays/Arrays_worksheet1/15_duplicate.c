/*Question: Remove duplicate elements
Question description: Write a C program to remove duplicate elements from an array.
Sample data:
Input: 2 3 2 4 3 5
Expected output:
Array after removing duplicates: 2 3 4 5*/
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
                memmove(&arr[j],&arr[j+1],(n-j-1)*sizeof(int));
                n--;
            }
        }
    }
    for(i=0;i<(n);i++)
    {
        printf("%d ",arr[i]);
    }
        
}
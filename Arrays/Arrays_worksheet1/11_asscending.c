/*QQuestion: Sort array in ascending order
Question description: Write a C program to sort elements in ascending order.
Sample data:
Input: 20 5 10 8
Expected output:
Sorted array: 5 8 10 20*/
#include<stdio.h>
int main()
{
    int arr[4],i,l,j,n;
    printf("Enter the elements:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    l=(sizeof(arr)/sizeof(arr[0]));
    for(i=0;i<l;i++)
    {
        
        for(j=(i+1);j<l;j++)
        {
            if(arr[i]>arr[j])
            {
                n=arr[i];
                arr[i]=arr[j];
                arr[j]=n;
            }
        }
    }
    printf("sorted array:");
    for(i=0;i<(l);i++)
    {
        printf("%d ",arr[i]);
    }
}
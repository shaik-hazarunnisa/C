/*Question: Reverse an array
Question description: Write a C program to reverse an array in-place.
Sample data:
Input: 10 20 30 40 50
Expected output:
Reversed array: 50 40 30 20 10 2*/
#include<stdio.h>
int main()
{
    int arr[5],n,i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0,j=4;i<j;i++,j--)
    {
        n=arr[i];
        arr[i]=arr[j];
        arr[j]=n;
    }
    printf("reversed array:");
     for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}

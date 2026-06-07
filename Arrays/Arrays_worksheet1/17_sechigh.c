/*Question: Find second largest element
Question description: Write a C program to find the second largest number in the array.
Sample data:
Input: 10 20 50 40
Expected output:
Second largest: 40*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,high=0,sechigh=-1;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       if(high<arr[i])
       {
           sechigh=high;
           high=arr[i];
       }
       else if((sechigh<arr[i])&&(sechigh!=high))
       {
           sechigh=arr[i];
       }
    }
    printf("second largest: %d",sechigh);
}
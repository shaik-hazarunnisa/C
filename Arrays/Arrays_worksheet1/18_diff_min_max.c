/*Question: Difference between max and min
Question description: Write a C program to find the difference between largest and smallest elements in an array.
Sample data:
Input: 5 1 9 3 6
Expected output:
Difference: 8*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,max=0,min=100;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       if(max<arr[i])
       {
           max=arr[i];
       }
       else if(min>arr[i])
       {
           min=arr[i];
       }
    }
    printf("Difference: %d",max-min);
}

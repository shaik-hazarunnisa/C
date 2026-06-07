/*Question: Sum of all elements in array
Question description: Write a C program to find the sum of all array elements entered by the user.
Sample data:
Input: 1 2 3 4 5
Expected output:
Sum = 15*/

#include<stdio.h>
int main()
{
    int *arr,n,i,sum=0;
    printf("enter the no of elements in array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
}

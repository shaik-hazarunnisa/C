/*Question: Sum of even numbers
Question description: Write a C program to find the sum of all even numbers in an array.
Sample data:
Input: 2 3 4 5 6
Expected output:
Sum of even numbers: 12*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,sum=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
    }
    
   printf("sum of even numbers:%d",sum);
}

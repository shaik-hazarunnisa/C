/*Question: Count prime numbers
Question description: Write a C program to count and display all prime numbers in an array.
Sample data:
Input: 2 4 5 6 7 8
Expected output:
Primes: 2 5 7
Count: 3*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,j,cnt=0,cnt1=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Primes:");
    for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            cnt++;
        }
        if(cnt==0)
        {
            printf("%d ",arr[i]);
            cnt1++;
        }
    }
    
   printf("\nCount:%d",cnt1);
}
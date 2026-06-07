/*Question: Segregate even and odd
Question description: Write a C program to arrange all even numbers first and then all odd numbers.
Sample data:
Input: 1 2 3 4 5 6
Expected output:
Even numbers: 2 4 6
Odd numbers: 1 3 5*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,*a;
    int i,n,j=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    a=malloc(n*sizeof(int));
    printf("Even numbers:");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            a[j]=arr[i];
            j++;
        }
    }
    printf("\nOdd numbers:");
    for(i=0;i<j;i++)
    {
        printf("%d ",a[i]);
    }
    
}
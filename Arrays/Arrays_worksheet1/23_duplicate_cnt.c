/*QQuestion: Count duplicate elements
Question description: Write a C program to count how many duplicate values are in the array.
Sample data:
Input: 1 2 3 1 4 2
Expected output:
Total duplicate elements: 2*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,j,cnt=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        
        for(j=(i+1);j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        
    }
    
   printf("duplicate elements:%d",cnt);
}
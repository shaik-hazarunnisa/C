/*****************************************************************************
Question description:
Write a C program to check whether an array is palindrome (reads the same forward and backward).
Sample data:
Input: 1 2 3 2 1
Expected output:
The array is a palindrome.
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int * input(int *p,int size)
{
    int i;
    printf("Enter the elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&p[i]);
    }
    return p;
}
int main()
{
    int *array1;
    int i,j,l1,cnt=0,k;
    printf("Enter no of elements of first array:");
    scanf("%d",&l1);
    array1=malloc(l1*sizeof(int));
    array1=input(array1,l1);
    
    for(i=0,j=(l1-1);i<j;i++,j--)
    {
        if(array1[i]!=array1[j])
        {
            cnt++;
        }
        
    }
    if(cnt==0)
    printf("palindrome");
    else
    {
        printf("not a palindrome");
    }
       return 0;
}
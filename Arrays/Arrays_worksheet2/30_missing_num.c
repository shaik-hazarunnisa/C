/******************************************************************************

Wuestion description:
Write a C program to find the missing number in an array of size n containing numbers from 1 to n+1.
Sample data:
Input: 1 2 4 5 6
Expected output:
Missing number is: 3

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
    int i,j,l1;
    printf("Enter no of elements of first array:");
    scanf("%d",&l1);
    array1=malloc(l1*sizeof(int));
    array1=input(array1,l1);
    j=array1[0];
    printf("missing numbers :");
    for(i=0;i<l1;i++)
    {
        if(array1[i]!=j)
        {
            printf("%d ",j);
            j++;
        }
        j++;
    }
}
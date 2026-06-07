/******************************************************************************
Question description:
Write a C program to find the intersection of two arrays (common elements).
Sample data:
Array 1: 1 2 3 4 Array 2: 3 4 5 6
Expected output:
Intersection: 3 4

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
    int *array1,*array2;
    int l1,l2,i,j,cnt=0,k;
    printf("Enter no of elements of first array:");
    scanf("%d",&l1);
    array1=malloc(l1*sizeof(int));
    array1=input(array1,l1);
    printf("Enter no of elements of second array:");
    scanf("%d",&l2);
    array2=malloc(l2*sizeof(int));
    array2=input(array2,l2);
    k=l1;
    printf("Intersection :");
    for(i=0;i<l2;i++)
    {
        cnt=0;
        for(j=0;j<l1;j++)
        {
            if(array1[j]==array2[i])
            {
                cnt++;
            }
        }
        if(cnt>0)
        {
            printf("%d ",array2[i]);
        }
        
    }
    
       return 0;
}

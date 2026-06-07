/*Question: Insert element at position
Question description: Write a C program to insert a number at a given position in an array.
Sample data:
Array: 10 20 30 40
Insert: 25 at position 2
Expected output:
Array after insertion: 10 20 25 30 40*/
#include<stdio.h>
#include<string.h>
int main()
{
    int arr[4],i,l,m,n;
    printf("Enter the elements:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value and position:");
    scanf("%d",&m);
    scanf("%d",&n);
    l=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<4;i++)
    {
        if(i==n)
        {
            printf("hello");
            memmove(&arr[i+1],&arr[i],(l-i)*sizeof(int));
            arr[i]=m;
            break;
        }
    }
    printf("array after insertion:");
    for(i=0;i<=l;i++)
    {
        printf("%d ",arr[i]);
    }
}

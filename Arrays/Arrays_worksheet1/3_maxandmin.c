/*Question: Find maximum and minimum element
Question description: Write a C program to find the largest and smallest element in the array.
Sample data:
Input: 8 3 15 6 2
Expected output:
Maximum = 15
Minimum = 2*/
#include<stdio.h>
int main()
{
    int high=0,low=9,i;
    int arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(high<arr[i])
        {
            high=arr[i];
        }
        else if(low>arr[i])
        {
            low=arr[i];
        }
    }
    printf("maximum=%d\nminimum=%d",high,low);
    
}

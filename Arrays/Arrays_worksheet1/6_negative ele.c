/*Question: Count negative elements
Question description: Write a C program to count total number of negative elements in an array.
Sample data:
Input: -1 3 -4 5 0 -7
Expected output:
Total negative elements: 3*/
#include<stdio.h>
int main()
{
    int arr[5],i,cnt=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
          cnt++;
    }
    printf("Total negative elements: %d",cnt);
}

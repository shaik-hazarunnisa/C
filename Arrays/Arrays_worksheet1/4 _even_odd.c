/*Question: Count even and odd elements
Question description: Write a C program to count how many even and odd numbers are in the array.
Sample data:
Input: 4 7 9 10 22
Expected output:
Even: 3
Odd: 2*/
#include<stdio.h>
int main()
{
    int arr[5],i,cnt=0,cnt1=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            cnt++;
        }
        else
            cnt1++;
    }
    printf("Even: %d\nOdd: %d",cnt,cnt1);
}

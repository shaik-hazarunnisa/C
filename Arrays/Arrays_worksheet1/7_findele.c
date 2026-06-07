/*Question: Find for an element
Question description: Write a C program to search for a number in an array and print its index.
Sample data:
Array: 10 20 30 40 50
Find: 30
Expected output:
Element found at index: 2*/
#include<stdio.h>
int main()
{
    int arr[5],n,i,cnt=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value too be found:");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            cnt++;
            printf("Element found at index:%d",i);
            break;
        }
    }
    if(cnt==0)
    {
        printf("element not found in the array");
    }
}

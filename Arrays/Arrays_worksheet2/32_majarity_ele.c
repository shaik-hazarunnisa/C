/******************************************************************************
. Find the majority element
    Question description:
    Write a C program to find the majority element in an array (element appearing more than n/2 times).
    Sample data:
    Input: 2 2 1 2 3 2 2
    Expected output:
    Majority element: 2
*******************************************************************************/
#include <stdio.h>

int main() 
{
    int arr[]={2,2,1,2,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]),cnt=0,i,m;
    
    for(i =0;i<n;i++) 
    {
       cnt=0;
        
        for(int j=0;j<n;j++) {
            if(arr[i]==arr[j]) {
                cnt++;
            }
        }
        m=n/2;
        if(cnt>m) {
            printf("Majority element: %d\n",arr[i]);
            return 0;
        }
    }
    printf("No majority element\n");
    return 0;
}
/*Question: Frequency of each element
Question description: Write a C program to count the frequency of each element in an array.
Sample data:
Input: 1 2 2 3 3 3
Expected output:
1 occurs 1 time
2 occurs 2 times
3 occurs 3 times*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int i,n,j,cnt=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    arr=malloc((n)*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=0;
        if(arr[i]!=arr[i-1])
        {
        for(j=0;j<n;j++)
        {
            
            if(arr[i]==arr[i-1])
                break;
            else if(arr[i]==arr[j])
            cnt++;
        }
        printf("%d occurs %d time\n",arr[i],cnt);
        }
    }
    
        
}

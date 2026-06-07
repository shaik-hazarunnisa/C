/******************************************************************************
5: Traverse Array with Pointer Arithmetic
Task:Using only a pointer (no array indexing), print all elements of the array.
Sample data:
Question1
int arr[] = {100, 200, 300, 400};
Expected output:
100 200 300 400
*******************************************************************************/
#include <stdio.h>

void traverse(int *p,int n)
{
    int i=0;
    while(i<n)
    {
        printf("%d ",*(p+i));
        i++;
    }
}
int main()
{
   int arr[]={100,200,300,400};
   int n;
  n=sizeof(arr)/sizeof(arr[0]);
   traverse(arr,n);

}
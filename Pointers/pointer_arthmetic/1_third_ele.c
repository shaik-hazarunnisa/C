/******************************************************************************
    Log Session an integer array with 5 elements. Use a pointer to access and print the third element by incrementing the pointer appropriately.
Sample data:
1
int arr[] = {5, 10, 15, 20, 25};
Expected output:
Third element is 15
*******************************************************************************/

#include <stdio.h>

void find(int *p,int n)
{
    int ele;
    ele=*(p+(n-1));
    printf("%drd element is %d",n,ele);
}
int main()
{
   int arr[]={5,10,15,20,25};
   int n;
   printf("Enter the element no to be found:");
   scanf("%d",&n);
   find(arr,n);

}
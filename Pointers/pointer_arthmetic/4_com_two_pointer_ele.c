/******************************************************************************
Task:Write code to compare two pointers to elements in an array and print which one points to the element with a smaller index.
Sample data:
1
2
3
int arr[] = {11, 22, 33, 44, 55};
int *ptr1 = &arr[2]; // points to 33
int *ptr2 = &arr[4]; // points to 55
Expected output:
Pointer ptr1 points to an earlier element than ptr2
*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
  int arr[] = {2, 4, 6, 8, 10};
  int *p1 = &arr[4]; 
  int *p2 = &arr[1];
  int i,size,m,n,dis;
  size=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<size;i++)
  {
      if(*p1==arr[i])
      n=i;
      else if(*p2==arr[i])
      m=i;
  }
  if(n>m)
  {
      printf("ptr2 points to an earlier element than ptr1");
  }
  else
  printf("ptr1 points to an earlier element than ptr2");
}
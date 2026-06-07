/******************************************************************************
 Task:Given two pointers pointing to elements of an integer array, find the distance (number of elements) between them.
Sample data:
1
2
3
int arr[] = {2, 4, 6, 8, 10};
int *p1 = &arr[4]; // points to 10
int *p2 = &arr[1]; // points to 4
Expected output:
Distance between pointers is 3
*******************************************************************************/

#include <stdio.h>

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
  dis=(n-m);
  if(dis<0)
    dis=-dis;
  printf("Distance between pointers is %d",dis);
}

/********************************************************************************************  
Write a C program to konow a number is power of two or not
 
*******************************************************************************/
#include <stdio.h>

int cnt_set_bit(unsigned int m)
{
    int i,n=0;
    while(m)
    {
        m=m&(m-1);
        n++;
    }
  
    return n;
}
int main()
{
    unsigned int num,n;
    printf("Enter the num ");
    scanf("%u",&num);
    n=cnt_set_bit(num);
    if(n==1)
    printf("%d is power of 2",num);
    else
      printf("%d is not a power of 2",num);
    
    
}
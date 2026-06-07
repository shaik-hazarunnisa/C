/********************************************************************************************  
Write a C program to determine whether a number is odd or even using bitwise operators.
 
*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num,n;
    printf("Enter the num ");
    scanf("%u",&num);
    if(num&1)
    printf("%d is odd",num);
    else
      printf("%d is even",num);
    
    
}
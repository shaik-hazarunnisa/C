/********************************************************************************************  
Write a C program to count the number of bits set to 1 in an integer. Also compare different methods. Additionally, check if the 20th bit of a 32-bit integer is set.
 
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
    printf("number of set in the given number is %d\n",n);
    if(num&(1<<20))
    {
        printf("20th bit is set:");
    }
    else
        printf("20th bit is not set:");
}
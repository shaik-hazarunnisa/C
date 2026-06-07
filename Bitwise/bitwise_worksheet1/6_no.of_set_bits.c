/******   Write a C program to count the number of set bits in an unsigned integer
*******************************************************************************/
#include <stdio.h>

int main()
{
    unsigned int num,i,n=0;
    printf("Enter the num ");
    scanf("%u",&num);
    for(i=0;i<32;i++)
    {
        if(num&(1<<i))
        n++;
    }
    printf("number of set in the guiven number is %d",n);
}
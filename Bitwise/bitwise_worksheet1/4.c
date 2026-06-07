/******    4. Write a program to check bit status in an integer:
        ◦ Check if LSB is set (1) or not (0)
        ◦ Check if MSB is set (1) or not (0)
        ◦ Check if the nth bit is set (1) or not (0) (user input)
*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    unsigned int num,n;
    printf("Enter the num ");
    scanf("%u",&num);
    //status of the LSB 
    if(num&1)
    {
    printf("LSB is set(1)\n");
    }
    else
       printf("LSB is not set(0)\n");
    //◦status of the MSB 
   if(num&(1<<30))
    {
    printf("MSB is set(1)");
    }
    else
       printf("MSB is not set(0)");
    //nth bit is set or not
     printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    if(num&(1<<n))
    {
    printf("nth bit is set(1)");
    }
    else
       printf("nth bit is set(0)");
}
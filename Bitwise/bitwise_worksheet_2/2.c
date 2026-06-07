/******************************************************************************
Write a C program to check if the Most Significant Bit (MSB) of a number is set (1) or not.
Sample data: Input: 128 (binary 10000000 for 8-bit number)
Expected output: MSB of 128 is set (1)

*******************************************************************************/

#include <stdio.h>
int main(){int n;
scanf("%d",&n);
if(n&(1<<7))printf("MSB of %d is set (1)",n);
else printf("MSB of %d is not set (0)",n);
return 0;
}

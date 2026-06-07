/******************************************************************************

12. Count total zeros and ones in a binary number

Write a C program to count the total number of zeros and ones in the binary representation of a number.
Sample data: Input: 15
Expected output: Number of ones: 4, Number of zeros: 4
Expected output: Flipped bits: 250 (assuming 8-bit)

*******************************************************************************/
#include <stdio.h>
int main(){unsigned char n;int ones=0;
scanf("%hhu",&n);
for(int i=0;i<8;i++)if(n&(1<<i))ones++;
printf("Number of ones: %d, Number of zeros: %d",ones,8-ones);
return 0;
}

/******************************************************************************

11. Flip bits of a binary number using bitwise operator

Write a C program to flip all bits of a number using bitwise operators.
Sample data: Input: 5
Expected output: Flipped bits: 250 (assuming 8-bit)
*******************************************************************************/
#include <stdio.h>
int main(){unsigned char n;
scanf("%hhu",&n);n=~n;
printf("%d",n);
return 0;
}
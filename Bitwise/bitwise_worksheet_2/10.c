/******************************************************************************

Write a C program to count the number of leading zeros in the binary representation of a number (assuming 32-bit integer).
Sample data: Input: 16
Expected output: Number of leading zeros: 27

*******************************************************************************/
#include <stdio.h>
int main(){unsigned int n;
int c=0;scanf("%u",&n);
for(int i=31;i>=0;i--){if(n&(1u<<i))break;c++;}printf("%d",c);
return 0;
}
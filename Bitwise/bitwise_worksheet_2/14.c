/******************************************************************************

14. Convert decimal to binary using bitwise operator

Write a C program to convert a decimal number to binary representation using bitwise operators.
Sample data: Input: 13
Expected output: Binary representation: 1101
*******************************************************************************/
#include <stdio.h>
int main(){int n;scanf("%d",&n);
for(int i=31;i>=0;i--)printf("%d",(n>>i)&1);
return 0;}

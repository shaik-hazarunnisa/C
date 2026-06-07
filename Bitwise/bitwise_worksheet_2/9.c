/******************************************************************************

Write a C program to count the number of trailing zeros in the binary representation of a number.
Sample data: Input: 40 (binary 101000)
Expected output: Number of trailing zeros: 3

*******************************************************************************/
#include <stdio.h>
int main(){int n,c=0;
scanf("%d",&n);
while((n&1)==0){c++;n>>=1;
}printf("%d",c);
return 0;
}
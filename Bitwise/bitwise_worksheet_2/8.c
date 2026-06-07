/******************************************************************************

Write a C program to find the position of the lowest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Lowest set bit of 18 is at position 1 (zero-based)

*******************************************************************************/
#include <stdio.h>
int main(){int n;
scanf("%d",&n);
for(int i=0;i<32;i++){if(n&(1<<i)){printf("%d",i);
break;
}}return 0;
}
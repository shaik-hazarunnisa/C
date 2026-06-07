/******************************************************************************

Write a C program to find the position of the highest set bit in a number.
Sample data: Input: 18 (binary 10010)
Expected output: Highest set bit of 18 is at position 4 (zero-based)

*******************************************************************************/
#include <stdio.h>
int main(){int n,pos=-1;
scanf("%d",&n);
for(int i=0;i<32;i++)if(n&(1<<i))pos=i;
printf("%d",pos);
return 0;
}
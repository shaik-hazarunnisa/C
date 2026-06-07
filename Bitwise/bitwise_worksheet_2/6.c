/******************************************************************************

Write a C program to toggle (flip) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 1
Expected output: Number after toggling bit 1: 8 (binary 1000)
*******************************************************************************/
#include <stdio.h>
int main(){int n,p;
scanf("%d%d",&n,&p);
n=n^(1<<p);
printf("%d",n);
return 0;
}
/******************************************************************************

Write a C program to set (make 1) the nth bit of a number.
Sample data:
Input number: 10 (binary 1010), bit position: 1
Expected output: Number after setting bit 1: 10 (binary 1010) - no change
Input number: 8 (binary 1000), bit position: 0
Expected output: Number after setting bit 0: 9 (binary 1001)

*******************************************************************************/
#include <stdio.h>
int main(){int n,p;
scanf("%d%d",&n,&p);
n=n|(1<<p);printf("%d",n);
return 0;
}
/******************************************************************************
Write a C program to get the value of the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 2
Expected output: Bit 2 of 10 is 1


*******************************************************************************/

#include <stdio.h>
int main(){
 int n,p;
 scanf("%d%d",&n,&p);
 printf("Bit %d of %d is %d",p,n,(n>>p)&1);
 return 0;
}
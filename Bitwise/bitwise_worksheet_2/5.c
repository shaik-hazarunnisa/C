/******************************************************************************

Write a C program to clear (make 0) the nth bit of a number.
Sample data: Input number: 10 (binary 1010), bit position: 3
Expected output: Number after clearing bit 3: 2 (binary 0010)
*******************************************************************************/
#include <stdio.h>
int main(){int n,p;
scanf("%d%d",&n,&p);
n=n&(~(1<<p));
printf("%d",n);
return 0;
}
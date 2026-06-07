/******************************************************************************

16. Check whether a number is even or odd using bitwise operator

Write a C program to check whether a number is even or odd using bitwise AND operator.
Sample data: Input: 7
Expected output: 7 is odd
*******************************************************************************/
#include <stdio.h>
int main(){int n;
scanf("%d",&n);
if(n&1)printf("%d is odd",n);
else printf("%d is even",n);
return 0;
}
/******************************************************************************

13. Rotate bits of a given number

Write a C program to rotate bits of a number to the left or right by a given number of positions.
Sample data: Input: number=16, rotate left by 2
Expected output: Result after rotation: 64

*******************************************************************************/
#include <stdio.h>
int main(){unsigned int n,r;
scanf("%u%u",&n,&r);
printf("%u",(n<<r)|(n>>(32-r)));
return 0;
}

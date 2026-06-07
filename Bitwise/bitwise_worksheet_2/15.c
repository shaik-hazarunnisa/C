/******************************************************************************

 15. Swap two numbers using bitwise operator
 
Write a C program to swap two numbers using bitwise XOR operator without using a temporary variable.
Sample data: Input: a=5, b=9
Expected output: After swapping: a=9, b=5
*******************************************************************************/
#include <stdio.h>
int main(){int a,b;
scanf("%d%d",&a,&b);
a^=b;b^=a;a^=b;
printf("a=%d b=%d",a,b);
return 0;
}
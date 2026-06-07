/******************************************************************************
2. Using & (Address-of) Operator
Goal: Learn how to find and print the memory address of variables.
Activity:
    • Declare variables of different types: int x;, float y;, char z;
    • Print their memory addresses using &x, &y, and &z.
    ************************************/
#include <stdio.h>

int main()
{
    int x=10;
    float y=5.5;
    char z= 'A';

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Value of y = %f\n", y);
    printf("Address of y = %p\n", &y);
   printf("Value of z = %c\n", z);
    printf("Address of z = %p\n", &z);

    return 0;
}
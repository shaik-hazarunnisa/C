/******************************************************************************
13. Pointer Type Compatibility
Goal: Understand the importance of matching pointer types.
Activity:
    • Declare int *ip; and float *fp;
    • Try assigning fp = ip; and observe compiler warning.
    • Correct the mismatch using proper types or casting.
***************************/
#include <stdio.h>

int main()
{
    int a =10;
    int *ip =&a;
    float *fp;
    fp =ip;  
    printf("%f\n", *fp); 
    return 0;
}
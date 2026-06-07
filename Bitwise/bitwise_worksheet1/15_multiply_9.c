/******************************************************************************
Write a program to multiply a number by 9 using bitwise shift operations.
*******************************************************************************/


#include <stdio.h>

int main()
{
    int n, pro;

    printf("Enter a number: ");
    scanf("%d", &n);
    pro= (n<<3)+n;  
    printf("Result: %d\n",pro);

    return 0;
}

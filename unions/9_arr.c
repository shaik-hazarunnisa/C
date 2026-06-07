/******************************************************************************
Union Array
Declare an array of unions, each holding an int, a float, or a char.
Write a program to assign values of different types to each element and display them. Observe any issues.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include <stdio.h>

union Data
{
    int x;
    float f;
    char ch;
};

int main()
{
    union Data arr[3];
    arr[0].x = 10;
    arr[1].f = 3.14;
    arr[2].ch = 'A';
    printf("Integer: %d\n", arr[0].x);
    printf("Float: %f\n", arr[1].f);
    printf("Char: %c\n", arr[2].ch);

    return 0;
}

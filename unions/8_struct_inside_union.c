/******************************************************************************
Structure Inside a Union
Define a union that contains a structure (for example, struct { int x, y; }) and an int.
Write a program to set and access the structure members through the union.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
#include <stdio.h>

union Data
{
    struct Point
    {
        int x;
        int y;
    } p;

    int num;
};

int main()
{
    union Data d;
    d.p.x = 10;
    d.p.y = 20;

    printf("Structure values:\n");
    printf("x=%d, y=%d\n", d.p.x, d.p.y);
    d.num = 100;
   printf("\nAfter assigning num:\n");
    printf("num = %d\n", d.num);
    printf("x = %d, y = %d\n", d.p.x, d.p.y);

    return 0;
}
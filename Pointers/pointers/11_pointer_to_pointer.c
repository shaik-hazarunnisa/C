/******************************************************************************
11. Pointer to Pointer (int **)
Goal: Learn how to use a pointer to another pointer.
Activity:
    • Declare int a = 5;, int *p = &a;, and int **pp = &p;
    • Print a, *p, and **pp to understand levels of indirection.
    ************************************/
#include <stdio.h>

int main()
{
    int a =5;
    int *p =&a;
    int **pp =&p;
    printf("Value of a = %d\n",a);
    printf("Value using *p = %d\n",*p);
    printf("Value using **pp = %d\n",**pp);
    printf("Address of a = %p\n", &a);
    printf("Value of p (address of a) = %p\n",p);
    printf("Value of pp (address of p) = %p\n",pp);

    return 0;
}
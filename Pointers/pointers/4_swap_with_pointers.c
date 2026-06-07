/******************************************************************************
4. Swapping Two Numbers Using Pointers
Goal: Understand how to pass variables by reference to functions using pointers.
Activity:
    • Write a swap function: void swap(int *a, int *b)
    • In main(), declare two integers and call swap(&x, &y);
    • Print values before and after swapping.
    ************************************/
#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  
    printf("After swap: x = %d, y = %d\n", x, y);
   return 0;
}
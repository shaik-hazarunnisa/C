/******************************************************************************
Write a program to determine the size (in bits) of an integer using bit shifts.
*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int x=1;
    int cnt=0;
    while (x!=0)
    {
        x=x<<1;  // left shift
        cnt++;
    }
    printf("Size of unsigned int: %d bits\n", cnt);
    return 0;
}
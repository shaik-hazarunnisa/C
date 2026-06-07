/******************************************************************************
    17. Write a program to convert a Little Endian integer to its Big Endian equivalent.

*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int num;
   printf("Enter a number: ");
    scanf("%u", &num);
    printf("Little endian: 0x%X\n", num);
    num= ((num&0x000000FF)<<24)|((num&0x0000FF00)<<8)|((num&0x00FF0000)>>8)|((num&0xFF000000)>>24);
    printf("Big endian: 0x%X\n", num);
    return 0;
}
/******************************************************************************
Swap the contents of two strings without using any extra temporary string variables. The strings' values should be exchanged completely.
Input: str1 = "hello", str2 = "world"
Output: str1 = "world", str2 = "hello" 


*******************************************************************************/
#include <stdio.h>

void swapStrings(char *str1, char *str2)
{
    while (*str1 != '\0' && *str2 != '\0')
    {
        // Swap characters using XOR
        *str1 ^= *str2;
        *str2 ^= *str1;
        *str1 ^= *str2;

        str1++;
        str2++;
    }
}

int main()
{
    char str1[] = "hello";
    char str2[] = "world";

    swapStrings(str1, str2);

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}
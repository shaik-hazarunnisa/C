/******************************************************************************
Print all possible interleavings of two strings, preserving the relative order of characters in each string.
Input: str1 = "AB", str2 = "CD"
Output: "ABCD", "ACBD", "ACDB", "CABD", "CADB", "CDAB"



*******************************************************************************/
#include <stdio.h>

// Recursive function to print interleavings
void interleave(char *str1, char *str2, char *result, int i)
{
    // If both strings are empty, print result
    if (*str1 == '\0' && *str2 == '\0')
    {
        result[i] = '\0';
        printf("%s\n", result);
        return;
    }

    // If characters remain in str1
    if (*str1 != '\0')
    {
        result[i] = *str1;
        interleave(str1 + 1, str2, result, i + 1);
    }

    // If characters remain in str2
    if (*str2 != '\0')
    {
        result[i] = *str2;
        interleave(str1, str2 + 1, result, i + 1);
    }
}

int main()
{
    char str1[] = "AB";
    char str2[] = "CD";

    char result[100];

    printf("Interleavings:\n");
    interleave(str1, str2, result, 0);

    return 0;
}
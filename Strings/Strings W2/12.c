/******************************************************************************
Find the first non-repeating character in a string and print it.
Input: "swiss"
Output: 'w'


*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[] = "swiss";
    int count[256] = {0};

    // Count frequency
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Find first non-repeating character
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");

    return 0;
}
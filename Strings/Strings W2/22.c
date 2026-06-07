/******************************************************************************

Check if two strings are anagrams of each other by comparing character counts.
Input: "listen", "silent"
Output: True


*******************************************************************************/
#include <stdio.h>
#include <string.h>

int areAnagrams(char str1[], char str2[])
{
    int count[256] = {0};

    // If lengths differ, not anagrams
    if (strlen(str1) != strlen(str2))
        return 0;

    // Count characters from str1 and str2
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++; // increment
        count[(unsigned char)str2[i]]--; // decrement
    }

    // Check if all counts are zero
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
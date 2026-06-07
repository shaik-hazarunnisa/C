/******************************************************************************
Remove all duplicate characters from a string, keeping only the first occurrence of each character.
Input: "programming"
Output: "progamin"



*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "programming";
    int count[256] = {0};  // ASCII character count

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    printf("Repeated characters: ");

    // Print characters that occur more than once
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i]] > 1)
        {
            printf("%c ", str[i]);
            count[str[i]] = 0;  // Avoid printing again
        }
    }

    return 0;
}
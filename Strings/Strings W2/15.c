/******************************************************************************

Compress a string using run-length encoding by replacing repeated characters with the character and count.
Input: "aaabbcc"
Output: "a3b2c2"




*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[] = "aaabbcc";
    int i = 0;

    printf("Compressed string: ");

    while (str[i] != '\0')
    {
        int count = 1;

        // Count repeated characters
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // Print character and count
        printf("%c%d", str[i], count);

        i++;
    }

    return 0;
}
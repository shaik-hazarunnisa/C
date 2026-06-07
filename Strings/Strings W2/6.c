/******************************************************************************
Remove from the first string all characters that appear in the second string.
Input: str1 = "hello world", str2 = "low"
Output: "he rd"

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str1[] = "hello world";
    char str2[] = "low";

    int hash[256] = {0};  // ASCII lookup table

    // Mark characters from str2
    for (int i = 0; str2[i] != '\0'; i++)
    {
        hash[(unsigned char)str2[i]] = 1;
    }

    int j = 0; // index for modified string

    // Remove characters from str1
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (hash[(unsigned char)str1[i]] == 0)
        {
            str1[j++] = str1[i];
        }
    }

    str1[j] = '\0'; // terminate string

    printf("Result: %s\n", str1);

    return 0;
}
/******************************************************************************
Find the length of the longest substring with no repeating characters.
Input: "abcabcbb"
Output: 3



*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX 256

int longestUniqueSubstring(char str[])
{
    int visited[MAX] = {0};
    int start = 0, maxLen = 0;

    for (int end = 0; str[end] != '\0'; end++)
    {
        // If character is already in window
        while (visited[(unsigned char)str[end]] == 1)
        {
            visited[(unsigned char)str[start]] = 0;
            start++;
        }

        // Include current character
        visited[(unsigned char)str[end]] = 1;

        // Update max length
        int currentLen = end - start + 1;
        if (currentLen > maxLen)
        {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

int main()
{
    char str[] = "abcabcbb";

    int result = longestUniqueSubstring(str);

    printf("Length of longest substring: %d\n", result);

    return 0;
}
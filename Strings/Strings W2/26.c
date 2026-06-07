/******************************************************************************
Find the longest palindromic substring inside a given string.
Input: "babad"
Output: "bab" or "aba"


*******************************************************************************/
#include <stdio.h>
#include <string.h>

// Function to expand around center
void expand(char *str, int left, int right, int *start, int *maxLen)
{
    int n = strlen(str);

    while (left >= 0 && right < n && str[left] == str[right])
    {
        if (right - left + 1 > *maxLen)
        {
            *start = left;
            *maxLen = right - left + 1;
        }
        left--;
        right++;
    }
}

int main()
{
    char str[] = "babad";
    int n = strlen(str);

    int start = 0;
    int maxLen = 1;

    for (int i = 0; i < n; i++)
    {
        // Odd length palindrome
        expand(str, i, i, &start, &maxLen);

        // Even length palindrome
        expand(str, i, i + 1, &start, &maxLen);
    }

    printf("Longest Palindromic Substring: ");
    for (int i = start; i < start + maxLen; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
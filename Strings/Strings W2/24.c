/******************************************************************************
Implement Boyer-Moore pattern searching algorithm with bad character heuristic to search a pattern in a text.
Input: Text = "here is a simple example", Pattern = "example"
Output: Pattern found at index 17


*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

// Preprocess bad character table
void badCharHeuristic(char *pattern, int m, int badChar[])
{
    // Initialize all occurrences as -1
    for (int i = 0; i < MAX_CHAR; i++)
        badChar[i] = -1;

    // Fill the actual index of each character
    for (int i = 0; i < m; i++)
        badChar[(unsigned char)pattern[i]] = i;
}

// Boyer-Moore search function
void boyerMoore(char *text, char *pattern)
{
    int n = strlen(text);
    int m = strlen(pattern);

    int badChar[MAX_CHAR];

    badCharHeuristic(pattern, m, badChar);

    int shift = 0; // shift of the pattern

    while (shift <= (n - m))
    {
        int j = m - 1;

        // Compare from right to left
        while (j >= 0 && pattern[j] == text[shift + j])
            j--;

        // Match found
        if (j < 0)
        {
            printf("Pattern found at index %d\n", shift);

            // Shift pattern
            shift += (shift + m < n) ?
                     m - badChar[(unsigned char)text[shift + m]] : 1;
        }
        else
        {
            // Shift using bad character rule
            int bcIndex = badChar[(unsigned char)text[shift + j]];
            shift += (j - bcIndex > 1) ? (j - bcIndex) : 1;
        }
    }
}

int main()
{
    char text[] = "here is a simple example";
    char pattern[] = "example";

    boyerMoore(text, pattern);

    return 0;
}
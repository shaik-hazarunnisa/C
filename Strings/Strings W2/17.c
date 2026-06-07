/******************************************************************************

Implement naive pattern searching to find all occurrences of a pattern in a text.
Input: Text = "hello world", Pattern = "lo"
Output: Pattern found at index 3



*******************************************************************************/
#include <stdio.h>
#include <string.h>

void naiveSearch(char text[], char pattern[])
{
    int n = strlen(text);
    int m = strlen(pattern);

    for (int i = 0; i <= n - m; i++)
    {
        int j;

        // Compare pattern with text at position i
        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        // If pattern is found
        if (j == m)
        {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main()
{
    char text[] = "hello world";
    char pattern[] = "lo";

    naiveSearch(text, pattern);

    return 0;
}
``
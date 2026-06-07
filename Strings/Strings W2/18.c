/******************************************************************************
Implement Rabin-Karp algorithm using hashing to find patterns in a text efficiently.
Input: Text = "abcxabcdabcdabcy", Pattern = "abcdabcy"
Output: Pattern found at index 8 



*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define d 256  // number of characters in input set

void rabinKarp(char text[], char pattern[], int q)
{
    int n = strlen(text);
    int m = strlen(pattern);

    int p = 0; // hash value for pattern
    int t = 0; // hash value for text window
    int h = 1;

    // Calculate h = pow(d, m-1) % q
    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;

    // Initial hash values for pattern and first window
    for (int i = 0; i < m; i++)
    {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }

    // Slide the pattern over text
    for (int i = 0; i <= n - m; i++)
    {
        // If hash values match, check characters
        if (p == t)
        {
            int j;
            for (j = 0; j < m; j++)
            {
                if (text[i + j] != pattern[j])
                    break;
            }

            if (j == m)
                printf("Pattern found at index %d\n", i);
        }

        // Calculate hash for next window
        if (i < n - m)
        {
            t = (d * (t - text[i] * h) + text[i + m]) % q;

            // Convert negative hash to positive
            if (t < 0)
                t += q;
        }
    }
}

int main()
{
    char text[] = "abcxabcdabcdabcy";
    char pattern[] = "abcdabcy";

    int q = 101; // Prime number for hashing

    rabinKarp(text, pattern, q);

    return 0;
}

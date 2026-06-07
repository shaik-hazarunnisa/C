/******************************************************************************
Partition a string into the minimum number of palindromic substrings (Palindrome Partitioning).
Input: "ababbbabbababa"
Output: 3


*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 100

int minPalPartition(char *str)
{
    int n = strlen(str);

    int dp[MAX];        // Minimum cuts
    int pal[MAX][MAX];  // Palindrome table

    // Initialize palindrome table
    for (int i = 0; i < n; i++)
    {
        pal[i][i] = 1; // single char is palindrome
    }

    // Build palindrome table
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i < n - len + 1; i++)
        {
            int j = i + len - 1;

            if (len == 2)
            {
                pal[i][j] = (str[i] == str[j]);
            }
            else
            {
                pal[i][j] = (str[i] == str[j] && pal[i + 1][j - 1]);
            }
        }
    }

    // Compute minimum cuts
    for (int i = 0; i < n; i++)
    {
        if (pal[0][i])
        {
            dp[i] = 0;
        }
        else
        {
            dp[i] = INT_MAX;

            for (int j = 0; j < i; j++)
            {
                if (pal[j + 1][i] && dp[j] + 1 < dp[i])
                {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    return dp[n - 1];
}

int main()
{
    char str[] = "ababbbabbababa";

    int result = minPalPartition(str);

    printf("Minimum cuts required: %d\n", result);

    return 0;
}
``
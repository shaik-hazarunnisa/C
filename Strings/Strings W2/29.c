/******************************************************************************
Match a string against a pattern containing wildcards '*' (any sequence) and '?' (single character).
Input: Pattern = "g*ks", String = "geeks"
Output: Match

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 100

int wildcardMatch(char *str, char *pattern)
{
    int n = strlen(str);
    int m = strlen(pattern);

    int dp[MAX][MAX];

    // Initialize DP table
    dp[0][0] = 1;

    // Pattern with '*' can match empty string
    for (int j = 1; j <= m; j++)
    {
        if (pattern[j - 1] == '*')
            dp[0][j] = dp[0][j - 1];
        else
            dp[0][j] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = 0; // non-empty string can't match empty pattern
    }

    // Fill DP table
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (pattern[j - 1] == '*')
            {
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
            }
            else if (pattern[j - 1] == '?' || pattern[j - 1] == str[i - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    return dp[n][m];
}

int main()
{
    char pattern[] = "g*ks";
    char str[] = "geeks";

    if (wildcardMatch(str, pattern))
        printf("Match\n");
    else
        printf("No Match\n");

    return 0;
}
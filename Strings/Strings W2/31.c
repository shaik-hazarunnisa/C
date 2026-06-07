/******************************************************************************
Find the longest substring common to two given strings.
Input: "abcdxyz", "xyzabcd"
Output: "abcd"

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 100

int main()
{
    char s1[] = "abcdxyz";
    char s2[] = "xyzabcd";

    int m = strlen(s1);
    int n = strlen(s2);

    int dp[MAX][MAX] = {0};

    int maxLen = 0;
    int endIndex = 0;

    // Build DP table
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;

                if (dp[i][j] > maxLen)
                {
                    maxLen = dp[i][j];
                    endIndex = i;  // track end of substring
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    // Print result
    printf("Longest Common Substring: ");

    for (int i = endIndex - maxLen; i < endIndex; i++)
    {
        printf("%c", s1[i]);
    }

    printf("\n");

    return 0;
}
``
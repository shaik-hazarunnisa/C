/******************************************************************************

Check if a string is an interleaving of two other strings, i.e., formed by merging them maintaining order.
Input: s1 = "abc", s2 = "def", s3 = "adbcef"
Output: True


*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 100

int isInterleaving(char *s1, char *s2, char *s3)
{
    int m = strlen(s1);
    int n = strlen(s2);

    // Length must match
    if (strlen(s3) != m + n)
        return 0;

    int dp[MAX][MAX];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            // Empty strings
            if (i == 0 && j == 0)
                dp[i][j] = 1;

            // Only s2 contributes
            else if (i == 0)
                dp[i][j] = (s2[j - 1] == s3[j - 1]) && dp[i][j - 1];

            // Only s1 contributes
            else if (j == 0)
                dp[i][j] = (s1[i - 1] == s3[i - 1]) && dp[i - 1][j];

            else
            {
                dp[i][j] =
                    ((s1[i - 1] == s3[i + j - 1]) && dp[i - 1][j]) ||
                    ((s2[j - 1] == s3[i + j - 1]) && dp[i][j - 1]);
            }
        }
    }

    return dp[m][n];
}

int main()
{
    char s1[] = "abc";
    char s2[] = "def";
    char s3[] = "adbcef";

    if (isInterleaving(s1, s2, s3))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
``
/******************************************************************************

Use dynamic programming to check if a string is an interleaving of two other strings.
Input: s1 = "abc", s2 = "def", s3 = "adbcef"
Output: True


*******************************************************************************/

 #include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "abc";
    char s2[] = "def";
    char s3[] = "adbcef";

    int m = strlen(s1);
    int n = strlen(s2);

    if (m + n != strlen(s3))
    {
        printf("False");
        return 0;
    }

    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = 1;
            else if (i == 0)
                dp[i][j] = dp[i][j - 1] && (s2[j - 1] == s3[j - 1]);
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] && (s1[i - 1] == s3[i - 1]);
            else
                dp[i][j] = (dp[i - 1][j] && (s1[i - 1] == s3[i + j - 1])) ||
                           (dp[i][j - 1] && (s2[j - 1] == s3[i + j - 1]));
        }
    }

    if (dp[m][n])
        printf("True");
    else
        printf("False");

    return 0;
}
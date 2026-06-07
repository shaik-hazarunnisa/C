/******************************************************************************

Find the smallest substring in a string containing all characters of another string.
Input: str1 = "this is a test string", str2 = "tist"
Output: "t stri"


*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 256

int main()
{
    char str1[] = "this is a test string";
    char str2[] = "tist";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 < len2)
    {
        printf("No such window exists\n");
        return 0;
    }

    int hash_str1[MAX] = {0};
    int hash_str2[MAX] = {0};

    // Store frequency of characters in str2
    for (int i = 0; i < len2; i++)
    {
        hash_str2[(unsigned char)str2[i]]++;
    }

    int start = 0, start_index = -1;
    int min_len = INT_MAX;
    int count = 0;

    for (int end = 0; end < len1; end++)
    {
        // Add current character
        hash_str1[(unsigned char)str1[end]]++;

        // If character is useful
        if (hash_str2[(unsigned char)str1[end]] != 0 &&
            hash_str1[(unsigned char)str1[end]] <= hash_str2[(unsigned char)str1[end]])
        {
            count++;
        }

        // If all characters are matched
        if (count == len2)
        {
            // Remove unnecessary characters
            while (hash_str1[(unsigned char)str1[start]] > hash_str2[(unsigned char)str1[start]] ||
                   hash_str2[(unsigned char)str1[start]] == 0)
            {
                if (hash_str1[(unsigned char)str1[start]] > hash_str2[(unsigned char)str1[start]])
                {
                    hash_str1[(unsigned char)str1[start]]--;
                }
                start++;
            }

            int window_len = end - start + 1;

            if (window_len < min_len)
            {
                min_len = window_len;
                start_index = start;
            }
        }
    }

    if (start_index == -1)
    {
        printf("No such window exists\n");
    }
    else
    {
        printf("Smallest substring: ");
        for (int i = start_index; i < start_index + min_len; i++)
        {
            printf("%c", str1[i]);
        }
    }

    return 0;
}
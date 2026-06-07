/******************************************************************************
Print all permutations of a given string. All possible arrangements of characters should be printed.
Input: "ABC"
Output: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA"


*******************************************************************************/
#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Recursive function to generate permutations
void permute(char *str, int start, int end)
{
    if (start == end)
    {
        printf("%s\n", str);
        return;
    }

    for (int i = start; i <= end; i++)
    {
        // Swap current index with start
        swap(&str[start], &str[i]);

        // Recursive call
        permute(str, start + 1, end);

        // Backtrack (restore original string)
        swap(&str[start], &str[i]);
    }
}

int main()
{
    char str[] = "ABC";

    printf("Permutations:\n");
    permute(str, 0, strlen(str) - 1);

    return 0;
}

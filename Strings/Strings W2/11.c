/******************************************************************************
Divide a string into N equal parts and print each part separately.
Input: "abcdefgh", N=4
Output: "ab", "cd", "ef", "gh"



*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abcdefgh";
    int N = 4;

    int len = strlen(str);

    // Check if division is possible
    if (len % N != 0)
    {
        printf("Cannot divide string into equal parts\n");
        return 0;
    }

    int partSize = len / N;

    printf("Divided parts:\n");

    for (int i = 0; i < len; i += partSize)
    {
        for (int j = i; j < i + partSize; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}

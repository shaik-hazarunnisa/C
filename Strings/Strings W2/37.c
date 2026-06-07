/******************************************************************************

Find the character with the second highest frequency in a string.
Input: "aabababa"
Output: 'b'
*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[] = "aabababa";
    int freq[256] = {0};

    // Step 1: Count frequency
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }

    int first = 0, second = 0;
    char firstChar = '\0', secondChar = '\0';

    // Step 2: Find highest and second highest
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > first)
        {
            second = first;
            secondChar = firstChar;

            first = freq[i];
            firstChar = i;
        }
        else if (freq[i] > second && freq[i] < first)
        {
            second = freq[i];
            secondChar = i;
        }
    }

    // Step 3: Print result
    if (secondChar != '\0')
        printf("Second highest frequency character: %c\n", secondChar);
    else
        printf("No second highest character found\n");

    return 0;
}
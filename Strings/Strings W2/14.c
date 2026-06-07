/******************************************************************************
Reverse the order of words in a sentence without reversing the words themselves.
Input: "Hello world"
Output: "world Hello"



*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello world";
    int len = strlen(str);

    printf("Reversed word order: ");

    for (int i = len - 1; i >= 0; i--)
    {
        // Detect start of a word
        if (i == 0 || str[i - 1] == ' ')
        {
            int j = i;

            // Print the word
            while (str[j] != ' ' && str[j] != '\0')
            {
                printf("%c", str[j]);
                j++;
            }
            printf(" ");
        }
    }

    return 0;
}
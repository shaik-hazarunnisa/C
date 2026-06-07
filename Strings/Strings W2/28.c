/******************************************************************************
Count the number of words in a string separated by spaces.
Input: "Hello world"
Output: 2


*******************************************************************************/
#include <stdio.h>

int countWords(char str[])
{
    int count = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        // Check start of a word
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char str[] = "Hello world";

    int words = countWords(str);

    printf("Number of words: %d\n", words);

    return 0;
}
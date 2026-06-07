/******************************************************************************

Given a list of strings and a word, print the strings containing all characters of that word.
Input: Word = "act", List = ["cat", "tac", "act", "dog"]
Output: "cat", "tac", "act"



*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 256

// Function to check if str contains all characters of word
int containsAllChars(char *str, char *word)
{
    int countStr[MAX] = {0};
    int countWord[MAX] = {0};

    // Count characters in word
    for (int i = 0; word[i] != '\0'; i++)
    {
        countWord[(unsigned char)word[i]]++;
    }

    // Count characters in string
    for (int i = 0; str[i] != '\0'; i++)
    {
        countStr[(unsigned char)str[i]]++;
    }

    // Check if str satisfies word requirement
    for (int i = 0; i < MAX; i++)
    {
        if (countWord[i] > countStr[i])
            return 0;
    }

    return 1;
}

int main()
{
    char *list[] = {"cat", "tac", "act", "dog"};
    char word[] = "act";
    int n = 4;

    printf("Matching strings:\n");

    for (int i = 0; i < n; i++)
    {
        if (containsAllChars(list[i], word))
        {
            printf("%s ", list[i]);
        }
    }

    return 0;
}
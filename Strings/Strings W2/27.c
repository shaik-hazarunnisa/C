/******************************************************************************
Group a list of words so that anagrams are together.
Input: ["cat", "tac", "act", "dog"]
Output: ["cat", "tac", "act"], ["dog"]


*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 100

// Function to sort a string
void sortString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main()
{
    char words[][10] = {"cat", "tac", "act", "dog"};
    int n = 4;

    char sorted[MAX][10];

    // Generate sorted forms
    for (int i = 0; i < n; i++)
    {
        strcpy(sorted[i], words[i]);
        sortString(sorted[i]);
    }

    int visited[MAX] = {0};

    printf("Grouped Anagrams:\n");

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        printf("[ %s ", words[i]);
        visited[i] = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (!visited[j] && strcmp(sorted[i], sorted[j]) == 0)
            {
                printf("%s ", words[j]);
                visited[j] = 1;
            }
        }

        printf("]\n");
    }

    return 0;
}
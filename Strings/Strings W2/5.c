/******************************************************************************
Remove all duplicate characters from a string, keeping only the first occurrence of each character.
Input: "programming"
Output: "progamin"



*******************************************************************************/


#include <stdio.h>

int main()
{
    char str[] = "programming";
    int visited[256] = {0};
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (!visited[(unsigned char)str[i]])
        {
            visited[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
        i++;
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}

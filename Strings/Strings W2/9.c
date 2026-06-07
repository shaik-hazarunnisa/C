/******************************************************************************
Print the reverse of a string using recursion.
Input: "hello"
Output: "olleh"


*******************************************************************************/
#include <stdio.h>

void reverse(char *str)
{
    // Base case
    if (*str == '\0')
        return;

    // Recursive call
    reverse(str + 1);

    // Print character after recursion
    printf("%c", *str);
}

int main()
{
    char str[] = "hello";

    printf("Reversed string: ");
    reverse(str);

    return 0;
}
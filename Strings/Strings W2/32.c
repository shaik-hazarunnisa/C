/******************************************************************************
Remove all occurrences of character 'b' and substring "ac" from a string.
Input: "abacb"
Output: "a"

*******************************************************************************/

 #include <stdio.h>

int main()
{
    char str[] = "abacb";
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        // Remove 'b'
        if (str[i] == 'b')
        {
            i++;
        }
        // Remove "ac"
        else if (str[i] == 'a' && str[i + 1] == 'c')
        {
            i += 2;  // skip both 'a' and 'c'
        }
        else
        {
            str[j++] = str[i++];
        }
    }

    str[j] = '\0';

    printf("Result: %s\n", str);

    return 0;
}
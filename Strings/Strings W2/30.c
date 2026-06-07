/******************************************************************************
Convert a numeric string to an integer without using built-in functions.
Input: "1234"
Output: 1234

*******************************************************************************/
#include <stdio.h>

int stringToInt(char str[])
{
    int result = 0;
    int i = 0;

    // Traverse string
    while (str[i] != '\0')
    {
        // Convert character to integer
        int digit = str[i] - '0';

        result = result * 10 + digit;
        i++;
    }

    return result;
}

int main()
{
    char str[] = "1234";

    int num = stringToInt(str);

    printf("Converted integer: %d\n", num);

    return 0;
}
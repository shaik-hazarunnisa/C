/******************************************************************************
Recursively remove all adjacent duplicate characters from a string until no duplicates remain.
Input: "azxxzy"
Output: "ay"



*******************************************************************************/
#include <stdio.h>

// Function to recursively remove adjacent duplicates
void removeDuplicates(char *str)
{
    int i, j;
    int changed;

    do
    {
        changed = 0;
        i = 0;
        j = 0;

        while (str[i] != '\0')
        {
            // If duplicate found
            if (str[i] == str[i + 1])
            {
                char dup = str[i];

                // Skip all identical adjacent characters
                while (str[i] == dup)
                    i++;

                changed = 1;  // Mark that removal happened
            }
            else
            {
                str[j++] = str[i++];
            }
        }

        str[j] = '\0';

    } while (changed);  // Repeat if changes occurred
}

int main()
{
    char str[] = "azxxzy";

    removeDuplicates(str);

    printf("Result: %s\n", str);

    return 0;
}
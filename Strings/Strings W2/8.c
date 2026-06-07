/******************************************************************************
Check if one string is a rotation of another, i.e., one string can be shifted to get the other.
Input: "abcd", "cdab"
Output: Yes


*******************************************************************************/
#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[])
{
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Lengths must be equal
    if (len1 != len2)
        return 0;

    // Create a new string: str1 + str1
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is substring of temp
    if (strstr(temp, str2) != NULL)
        return 1;

    return 0;
}

int main()
{
    char str1[] = "abcd";
    char str2[] = "cdab";

    if (isRotation(str1, str2))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
/******************************************************************************
Sort an array of strings in alphabetical order. The sorted array should 
list strings from A to Z.
Input: {"John", "Alice", "Bob"}
Output: {"Alice", "Bob", "John"}



*******************************************************************************/
#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][20], int n)
{
    char temp[20];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Compare strings
            if (strcmp(arr[i], arr[j]) > 0)
            {
                // Swap strings
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main()
{
    char arr[][20] = {"John", "Alice", "Bob"};
    int n = 3;

    sortStrings(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }

    return 0;
}
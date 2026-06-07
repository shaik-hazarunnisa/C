/******************************************************************************
Rearrange characters in a string so that the same characters are at least d distance apart.
Input: "aabbcc", d=2
Output: "abcabc"


*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 256

typedef struct {
    char ch;
    int freq;
} Node;

// Simple function to find max frequency index
int getMax(Node arr[], int size)
{
    int max = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i].freq > arr[max].freq)
            max = i;
    }
    return max;
}

void rearrange(char str[], int d)
{
    int hash[MAX] = {0};
    int n = strlen(str);

    // Count frequency
    for (int i = 0; i < n; i++)
        hash[(unsigned char)str[i]]++;

    Node heap[MAX];
    int size = 0;

    // Build array of characters
    for (int i = 0; i < MAX; i++)
    {
        if (hash[i] > 0)
        {
            heap[size].ch = i;
            heap[size].freq = hash[i];
            size++;
        }
    }

    char result[100];
    int filled[100] = {0};

    // Initialize result with placeholders
    for (int i = 0; i < n; i++)
        result[i] = '\0';

    // Place characters
    for (int i = 0; i < size; i++)
    {
        int idx = getMax(heap, size);
        char ch = heap[idx].ch;
        int freq = heap[idx].freq;

        int pos = 0;

        // Find first available slot
        while (pos < n && result[pos] != '\0')
            pos++;

        for (int j = 0; j < freq; j++)
        {
            if (pos >= n)
            {
                printf("Not possible\n");
                return;
            }

            result[pos] = ch;
            pos += d;

            while (pos < n && result[pos] != '\0')
                pos++;
        }

        heap[idx].freq = 0; // mark used
    }

    result[n] = '\0';
    printf("Rearranged string: %s\n", result);
}

int main()
{
    char str[] = "aabbcc";
    int d = 2;

    rearrange(str, d);

    return 0;
}

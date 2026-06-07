/******************************************************************************
For a stream of characters, print the first non-repeating character at each step.
Input stream: "aabc"
Output: "a a b b"


*******************************************************************************/
#include <stdio.h>

int main()
{
    char stream[] = "aabc";
    int freq[256] = {0};
    char queue[256];
    int front = 0, rear = 0;

    for (int i = 0; stream[i] != '\0'; i++)
    {
        char ch = stream[i];
        freq[(unsigned char)ch]++;

        queue[rear++] = ch;

        while (front < rear && freq[(unsigned char)queue[front]] > 1)
            front++;

        if (front < rear)
            printf("%c ", queue[front]);
        else
            printf("-1 ");
    }

    return 0;
}
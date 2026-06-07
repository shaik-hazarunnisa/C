/******************************************************************************
Find the character that appears most frequently in the input string and print it.
Input: "sample string"
Output: 's'


*******************************************************************************/

```c
#include <stdio.h>

int main()
{
    char str[] = "sample string";
    int freq[256] = {0};
    int i = 0, max = 0;
    char result;

    while (str[i] != '\0')
    {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            result = i;
        }
    }

    printf("'%c'", result);

    return 0;
}
```

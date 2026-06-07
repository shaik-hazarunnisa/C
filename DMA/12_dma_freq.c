/******************************************************************************
Goal: Use calloc for zero-initialized counting.
Activity:
    • Allocate an integer array of size 100 using calloc.
    • Accept n numbers between 0 and 99.
    • Increment the value at each index to count frequency.
    • Display the frequencies.
    • Free the memory.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *freq;
    int n, i, num;

    freq = (int *)calloc(100, sizeof(int));
    if (freq == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter %d numbers 0 to 99:\n", n);
    for(i=0; i<n;i++)
    {
        scanf("%d",&num);
            freq[num]++;  
        
    }
    printf("\nFrequencies:\n");
    for(i=0;i<100;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }
    free(freq);

    return 0;
}
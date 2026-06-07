/******************************************************************************
Read a value from a file into a variable, and also write a variable’s value back into a file.
Input: File name: number.txt (contains: 42)
Output: Read variable: 42; After writing value 100, file now contains: 100
*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    fp = fopen("number.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fscanf(fp, "%d", &num);
    fclose(fp);

    printf("Read variable: %d\n", num);
    fp = fopen("number.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    num = 100;
    fprintf(fp, "%d", num);
    fclose(fp);
    return 0;
}
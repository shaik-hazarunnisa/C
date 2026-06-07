/******************************************************************************
Show all the contents in a file and also print the total number of lines.
Input: File name: lines.txt
Output: (shows all lines)
Total lines: 5
*******************************************************************************/
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines =0;

    fp = fopen("lines.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("File contents:\n");

    while ((ch =fgetc(fp))!=EOF) 
    {
        printf("%c", ch);

        if (ch=='\n') {
            lines++;
        }
    }

    fclose(fp);

    printf("Total lines: %d\n", lines);

    return 0;
}
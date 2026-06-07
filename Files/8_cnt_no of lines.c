/******************************************************************************

Count how many lines are present in a text file.
Input: File name: lines.txt
Output: Total lines: 5
*******************************************************************************/
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0;

    fp =fopen("lines.txt", "r");

    if (fp==NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch=fgetc(fp))!=EOF) {
        if (ch=='\n') {
            lines++;
        }
    }

    fclose(fp);

    printf("Total lines: %d\n", lines);

    return 0;
}
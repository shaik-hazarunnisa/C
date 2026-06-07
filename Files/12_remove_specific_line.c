/******************************************************************************
emove a specific line (by line number) from a file.
Input: File name: lines.txt
Line to remove: 2
Output: File now contains all lines except line 2.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp, *temp;
    char line[200];
    int line_no, current =1;

    printf("Enter line number to remove: ");
    scanf("%d",&line_no);

    fp = fopen("lines.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL||temp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp)) {
        if (current != line_no) {
            fputs(line, temp); 
        }
        current++;
    }

    fclose(fp);
    fclose(temp);
    remove("lines.txt");
    rename("temp.txt", "lines.txt");

    printf("Line %d removed successfully.\n", line_no);

    return 0;
}
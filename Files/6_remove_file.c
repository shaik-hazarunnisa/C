/******************************************************************************
Delete a file from the computer.
Input: File name: temp.txt
Output: File 'temp.txt' deleted.
*******************************************************************************/
#include <stdio.h>

int main() {
    char filename[]="lines.txt";

    if (remove(filename)==0) {
        printf("File '%s' deleted.\n", filename);
    } else {
        printf("Error deleting file.\n");
    }

    return 0;
}
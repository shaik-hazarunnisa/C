/******************************************************************************
Delete a file from computer
*******************************************************************************/
#include <stdio.h>

int main() {
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    if (remove(filename) == 0) {
        printf("file %s deleted\n", filename);
    } else {
        printf("Unable to delete file %s\n", filename);
    }

    return 0;
}
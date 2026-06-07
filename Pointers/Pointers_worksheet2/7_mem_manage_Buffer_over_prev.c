/******************************************************************************
7. Memory Management and Buffer Overflow Prevention

Goal:

Implement safe memory handling practices to prevent buffer overflows and
related security issues.

Activity:

1. Allocate buffers dynamically to match expected input sizes.
2. Use safe input functions that limit the number of characters read.
3. Validate input sizes before copying or appending to buffers.
4. Practice freeing memory correctly to avoid leaks or dangling pointers..
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    printf("Enter string size: ");
    scanf("%d",&size);
    getchar();
    char *str=(char*)malloc(size*sizeof(char));
    if(str==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter a string: ");
    fgets(str,size,stdin);
    str[strcspn(str, "\n")]='\0';
    char dest[50];
    if(strlen(str)<sizeof(dest)) {
        strcpy(dest,str);
        printf("Copied safely: %s\n",dest);
    } else {
        printf("Input too large to copy safely\n");
    }
    free(str);
    str = NULL;
    return 0;
}
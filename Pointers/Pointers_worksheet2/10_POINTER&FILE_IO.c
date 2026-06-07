/******************************************************************************
10. Pointer and File I/O

Goal:

Use pointers and dynamic memory to efficiently read and write data of 
variable sizes to files.

Activity:

1. Open a file for reading and writing.
2. Determine the size of the file or data to read.
3. Dynamically allocate a buffer to hold file data.
4. Use pointers to read the data into memory and write data back to a file.
5. Close the file and free allocated memory.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE*fp;
    char*buffer;
    long size;
    fp=fopen("input.txt", "r");
    if(fp==NULL) {
        printf("File not found\n");
        return 1;
    }
    fseek(fp,0,SEEK_END);
    size=ftell(fp);
    rewind(fp);
    buffer=(char*)malloc((size+1)*sizeof(char));
    if(buffer==NULL) {
        printf("Memory allocation failed\n");
        fclose(fp);
        return 1;
    }
    fread(buffer,sizeof(char),size,fp);
    buffer[size]='\0';
    printf("File content:\n%s\n", buffer);
    fclose(fp);
    fp=fopen("output.txt", "w");
    if(fp==NULL) {
        printf("Cannot open output file\n");
        free(buffer);
        return 1;
    }
    fwrite(buffer,sizeof(char),size,fp);
    fclose(fp);
    free(buffer);
    return 0;
}
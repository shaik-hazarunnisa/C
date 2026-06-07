/******************************************************************************
Open an existing file and display its contents on the screen.
Input:File name: test.txt
Output:Hello, this is my first file!
***************************/
#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("File not found \n");
        return 0;
    }
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    return 0;
}
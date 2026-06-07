/******************************************************************************
Read every line from a file and store those lines in an array.
Input: File name: lines.txt
Output: Line one, Line two, Line three (as array elements)
***************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src, *dest;
    char s[50], d[50];
    char ch;

    printf("Enter source file: ");
    scanf("%s",s);

    printf("Enter destination file: ");
    scanf("%s",d);

   src = fopen(s, "r");
    if(src== NULL)
    {
        printf("Error: Cannot open source file!\n");
        return 1;
    }


    dest =fopen(d, "w");
    if(dest==NULL)
    {
        printf("Error: Cannot create destination file!\n");
        fclose(src);
        return 1;
    }
    
    while((ch=fgetc(src))!=EOF)
    {
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
    
    return 0;
    
}
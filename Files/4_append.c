/******************************************************************************
Add more lines to the end of a file without erasing its current content.
Input:File name: lines.txt
Number of new lines: 2
New lines: Line four, Line five
Output:File now contains: Line one, Line two, Line three, Line four, Line five
***************************/
#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[50];
    char line[100];
    int n,i;
    
    printf("Enter the filename :");
    scanf("%s",filename);
    
    fp=fopen(filename,"a");
    if(fp==NULL)
    {
        printf("File not found \n");
        return 0;
    }
    printf("Enter no of new lines:");
    scanf("%d",&n);
    
    getchar();
    
    for(i=0;i<n;i++)
    {
        printf("Enter the line %d\n",i+1);
        fgets(line,sizeof(line),stdin);
        fputs(line,fp);
    }
    fclose(fp);
    
    return 0;
    
}
/******************************************************************************
Take several lines from the user and write all of them into a file.
Input: File name: lines.txt
Number of lines: 3
Lines: Line one, Line two, Line three
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
    
    fp=fopen(filename,"w");
    if(fp==NULL)
    {
        printf("File not found \n");
        return 0;
    }
    printf("Enter no of lines:");
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
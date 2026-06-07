/******************************************************************************
Read every line from a file and store those lines in an array.
Input: File name: lines.txt
Output: Line one, Line two, Line three (as array elements)
***************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    char filename[50];
    char line[100];
    char **arr=NULL;
    int n=0,i;
    
    printf("Enter the filename :");
    scanf("%s",filename);
    
    fp=fopen(filename,"r");
    if(fp==NULL)
    {
        printf("File not found \n");
        return 0;
    }
   
    while(fgets(line,sizeof(line),fp)!=NULL)
    {
       arr = realloc(arr, (n+1) * sizeof(char *));
        arr[n]=malloc(100*sizeof(char));
        strcpy(arr[n++],line);
    }
   for(i=0;i<n;i++)
   {
       printf("%s",arr[i]);
   }
    fclose(fp);
    
    return 0;
    
}
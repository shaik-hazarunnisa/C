/******************************************************************************
Count how many lines in a file end with a semicolon.
Input: File: data.txt (lines, some end with ;)
Output: Lines ending with semicolon: 2

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
 char fname[50],line[300];
 int count=0,len;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while(fgets(line,300,fp)!=NULL){
  len=strlen(line);
  if(len>0 && line[len-1]==';') count++;
 }
 fclose(fp);
 printf("Lines ending with semicolon: %d",count);
 return 0;
}
/******************************************************************************
Count how many lines are present in a text file.
Input: File name: lines.txt
Output: Total lines: 5

*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50],ch;
 int count=0;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while((ch=fgetc(fp))!=EOF){
  if(ch=='\n') count++;
 }
 fclose(fp);
 printf("Total lines: %d",count+1);
 return 0;
}
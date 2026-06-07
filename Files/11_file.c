/******************************************************************************
Show all the contents in a file and also print the total number of lines.
Input: File name: lines.txt
Output: (shows all lines)
Total lines: 5

*******************************************************************************/
#include <stdio.h>
int main(){
 char fname[50],ch;
 int lines=0;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while((ch=fgetc(fp))!=EOF){
  putchar(ch);
  if(ch=='\n') lines++;
 }
 fclose(fp);
 printf("Total lines: %d",lines+1);
 return 0;
}
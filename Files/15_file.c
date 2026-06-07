/******************************************************************************
Change all the letters in a file to uppercase.
Input: File name: info.txt (content: Hello World!)
Output: HELLO WORLD!

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
int main(){
 char fname[50],ch;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 FILE *temp=fopen("temp.txt","w");
 while((ch=fgetc(fp))!=EOF){
  fputc(toupper(ch),temp);
 }
 fclose(fp);
 fclose(temp);
 remove(fname);
 rename("temp.txt",fname);
 printf("Converted to uppercase.");
 return 0;
}
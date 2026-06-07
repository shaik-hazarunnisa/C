/******************************************************************************
Capitalize the first letter of each word in a file.
Input: File name: info.txt (content: hello world!)
Output: Hello World!

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
int main(){
 char fname[50],ch,prev=' ';
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 FILE *temp=fopen("temp.txt","w");
 while((ch=fgetc(fp))!=EOF){
  if(prev==' '||prev=='\n'||prev=='\t') ch=toupper(ch);
  else ch=tolower(ch);
  fputc(ch,temp);
  prev=ch;
 }
 fclose(fp);
 fclose(temp);
 remove(fname);
 rename("temp.txt",fname);
 printf("Capitalized.");
 return 0;
}
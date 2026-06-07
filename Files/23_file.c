/******************************************************************************
Take everything from one file and append it to the end of another file.
Input: File1: main.txt (Main)
File2: extra.txt (Extra)
Output: main.txt now contains: Main, Extra


*******************************************************************************/
#include <stdio.h>
int main(){
 char f1[50],f2[50],ch;
 printf("Enter main file: ");
 scanf("%s",f1);
 printf("Enter extra file: ");
 scanf("%s",f2);
 FILE *fp1=fopen(f1,"a");
 if(fp1==NULL){
  printf("Main file not found");
  return 1;
 }
 FILE *fp2=fopen(f2,"r");
 if(fp2==NULL){
  printf("Extra file not found");
  return 1;
 }
 while((ch=fgetc(fp2))!=EOF) fputc(ch,fp1);
 fclose(fp1);
 fclose(fp2);
 printf("Content appended to '%s'.",f1);
 return 0;
}

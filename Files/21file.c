/******************************************************************************
Join two files together and save the result in a new file.
Input: File 1: a.txt (AAA)
File 2: b.txt (BBB)
New file: ab.txt
Output: ab.txt content: AAA
BBB
*******************************************************************************/
#include <stdio.h>
int main(){
 char f1[50],f2[50],nf[50],ch;
 printf("Enter first file: ");
 scanf("%s",f1);
 printf("Enter second file: ");
 scanf("%s",f2);
 printf("Enter new file name: ");
 scanf("%s",nf);
 FILE *fp1=fopen(f1,"r");
 if(fp1==NULL){
  printf("File 1 not found");
  return 1;
 }
 FILE *fp2=fopen(f2,"r");
 if(fp2==NULL){
  printf("File 2 not found");
  return 1;
 }
 FILE *fp3=fopen(nf,"w");
 while((ch=fgetc(fp1))!=EOF) fputc(ch,fp3);
 while((ch=fgetc(fp2))!=EOF) fputc(ch,fp3);
 fclose(fp1);
 fclose(fp2);
 fclose(fp3);
 printf("Files joined into '%s'.",nf);
 return 0;
}
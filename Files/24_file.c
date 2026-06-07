/******************************************************************************
Check if two files are exactly the same or not.
Input: File1: a.txt, File2: b.txt
Output: Files are identical or Files are different

*******************************************************************************/
#include <stdio.h>

int main(){
 char f1[50],f2[50],c1,c2;
 printf("Enter first file: ");
 scanf("%s",f1);
 printf("Enter second file: ");
 scanf("%s",f2);
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
 while(1){
  c1=fgetc(fp1);
  c2=fgetc(fp2);
  if(c1!=c2){
   printf("Files are different");
   fclose(fp1);
   fclose(fp2);
   return 0;
  }
  if(c1==EOF||c2==EOF) break;
 }
 fclose(fp1);
 fclose(fp2);
 printf("Files are identical");
 return 0;
}
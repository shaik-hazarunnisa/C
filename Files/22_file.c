/******************************************************************************
Merge alternate lines from two files into a third file.
Input: File 1: a.txt (A1, A2)
File 2: b.txt (B1, B2)
New file: merge.txt
Output: merge.txt: A1, B1, A2, B2


*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
 char f1[50],f2[50],nf[50];
 char line1[300],line2[300];
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
 while(1){
  if(fgets(line1,300,fp1)!=NULL) fputs(line1,fp3);
  if(fgets(line2,300,fp2)!=NULL) fputs(line2,fp3);
  if(feof(fp1)&&feof(fp2)) break;
 }
 fclose(fp1);
 fclose(fp2);
 fclose(fp3);
 printf("Files merged alternately into '%s'.",nf);
 return 0;
}
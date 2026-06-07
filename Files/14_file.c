/******************************************************************************
Replace every use of a chosen word in a file with a different word.
Input: File name: info.txt
Word to replace: file
Replacement: document
Output: Content after: This is a test document.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
 char fname[50],old[50],rep[50],word[200],result[5000]="";
 printf("Enter file name: ");
 scanf("%s",fname);
 printf("Word to replace: ");
 scanf("%s",old);
 printf("Replacement: ");
 scanf("%s",rep);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while(fscanf(fp,"%s",word)!=EOF){
  if(strcmp(word,old)==0) strcat(result,rep);
  else strcat(result,word);
  strcat(result," ");
 }
 fclose(fp);
 fp=fopen(fname,"w");
 fputs(result,fp);
 fclose(fp);
 printf("Replaced.");
 return 0;
}
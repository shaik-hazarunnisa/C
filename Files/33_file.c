/******************************************************************************
Count how many empty (blank) lines are in a file.
Input: File: data.txt
Output: Blank lines: 1

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
 char fname[50],line[300];
 int count=0,i,blank;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while(fgets(line,300,fp)!=NULL){
  blank=1;
  for(i=0;line[i]!='\0';i++){
   if(line[i]!=' ' && line[i]!='\t' && line[i]!='\n'){
    blank=0;
    break;
   }
  }
  if(blank==1) count++;
 }
 fclose(fp);
 printf("Blank lines: %d",count);
 return 0;
}
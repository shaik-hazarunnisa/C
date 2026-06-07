/******************************************************************************
Remove a specific line (by line number) from a file.
Input: File name: lines.txt
Line to remove: 2
Output: File now contains all lines except line 2.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
 char fname[50];
 int rem,i=1;
 char line[300];
 printf("Enter file name: ");
 scanf("%s",fname);
 printf("Line to remove: ");
 scanf("%d",&rem);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 FILE *temp=fopen("temp.txt","w");
 while(fgets(line,300,fp)!=NULL){
  if(i!=rem) fputs(line,temp);
  i++;
 }
 fclose(fp);
 fclose(temp);
 remove(fname);
 rename("temp.txt",fname);
 printf("Line removed from '%s'.",fname);
 return 0;
}
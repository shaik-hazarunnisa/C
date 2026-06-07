/******************************************************************************
Change a particular line in a file to some new text.
Input: File name: lines.txt
Line number: 3
New text: This line has been changed!
Output: File now contains new text at line 3.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
 char fname[50];
 int lineNo,i=1;
 char line[300],newtext[300];
 printf("Enter file name: ");
 scanf("%s",fname);
 printf("Line number: ");
 scanf("%d",&lineNo);
 getchar();
 printf("New text: ");
 fgets(newtext,300,stdin);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 FILE *temp=fopen("temp.txt","w");

 while(fgets(line,300,fp)!=NULL){
  if(i==lineNo) fputs(newtext,temp);
  else fputs(line,temp);
  i++;
 }
 fclose(fp);
 fclose(temp);
 remove(fname);
 rename("temp.txt",fname);
 printf("Line changed in '%s'.",fname);
 return 0;
}
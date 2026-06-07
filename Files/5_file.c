/******************************************************************************

Add more lines to the end of a file without erasing its current content.
Input: File name: lines.txt
Number of new lines: 2
New lines: Line four, Line five
Output: File now contains: Line one, Line two, Line three, Line four, Line five

*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50],line[200];
 int n,i;
 printf("Enter file name: ");
 scanf("%s",fname);
 printf("Number of new lines: ");
 scanf("%d",&n);
 getchar();
 FILE *fp=fopen(fname,"a");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 for(i=0;i<n;i++){
  fgets(line,200,stdin);
  fputs(line,fp);
 }
 fclose(fp);
 printf("Lines added to '%s'.",fname);
 return 0;
}

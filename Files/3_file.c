/******************************************************************************

Take several lines from the user and write all of them into a file.
Input: File name: lines.txt
Number of lines: 3
Lines: Line one, Line two, Line three
Output: All lines saved in 'lines.txt'.

*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50],line[200];
 int n,i;
 printf("Enter file name: ");
 scanf("%s",fname);
 printf("Number of lines: ");
 scanf("%d",&n);
 getchar();
 FILE *fp=fopen(fname,"w");
 if(fp==NULL){
  printf("Error opening file");
  return 1;
 }
 for(i=0;i<n;i++){
  fgets(line,200,stdin);
  fputs(line,fp);
 }
 fclose(fp);
 printf("All lines saved in '%s'.",fname);
 return 0;
}
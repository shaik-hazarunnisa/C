/******************************************************************************

Read every line from a file and store those lines in an array.
Input: File name: lines.txt
Output: Line one, Line two, Line three (as array elements)

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
 char fname[50],lines[50][200];
 int i=0;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while(fgets(lines[i],200,fp)!=NULL){
  lines[i][strcspn(lines[i],"\n")]=0;
  i++;
 }
 fclose(fp);
 for(int j=0;j<i;j++) printf("%s\n",lines[j]);
 return 0;
}
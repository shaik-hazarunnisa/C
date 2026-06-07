/******************************************************************************
Display the lines of a file in reverse order (from last to first).
Input: File name: lines.txt
Output: Shows lines from bottom to topfo.txt (content: hello world!)
Output: Hello World!

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
 char fname[50],lines[200][300];
 int count=0;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while(fgets(lines[count],300,fp)!=NULL) count++;
 fclose(fp);
 for(int i=count-1;i>=0;i--) printf("%s",lines[i]);
 return 0;
}
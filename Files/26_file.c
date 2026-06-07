/******************************************************************************
Find out how big a file is (in bytes).
Input: File name: a.txt
Output: Size: 36 bytes

*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50];
 long size;
 FILE *fp;
 printf("Enter file name: ");
 scanf("%s",fname);
 fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 fseek(fp,0,SEEK_END);
 size=ftell(fp);
 fclose(fp);
 printf("Size: %ld bytes",size);
 return 0;
}
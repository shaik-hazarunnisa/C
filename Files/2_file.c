/******************************************************************************

Make a new file and save some text entered by the user.
Input: File name: test.txt
Text: Hello, this is my first file!
Output: File 'test.txt' created and saved.


*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50],ch;
 printf("Enter file name: ");
 scanf("%s",fname);
 FILE *fp=fopen(fname,"r");
 if(fp==NULL){
  printf("File not found");
  return 1;
 }
 while((ch=fgetc(fp))!=EOF){
  putchar(ch);
 }
 fclose(fp);
 return 0;
}
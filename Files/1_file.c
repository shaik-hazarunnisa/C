/******************************************************************************

Make a new file and save some text entered by the user.
Input: File name: test.txt
Text: Hello, this is my first file!
Output: File 'test.txt' created and saved.


*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50],text[200];
 printf("Enter file name: ");
 scanf("%s",fname);
 getchar();
 printf("Enter text: ");
 fgets(text,200,stdin);
 FILE *fp=fopen(fname,"w");
 if(fp==NULL){
  printf("Error creating file");
  return 1;
 }
 fputs(text,fp);
 fclose(fp);
 printf("File '%s' created and saved.",fname);
 return 0;
}
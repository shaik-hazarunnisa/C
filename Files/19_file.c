/******************************************************************************
Encrypt (scramble) a file’s content so it can’t be read easily.
Input: File name: secret.txt (content: my password)
Output: File now contains: (garbled/encrypted text)

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

 FILE *temp=fopen("temp.txt","w");

 while((ch=fgetc(fp))!=EOF){
  ch = ch + 3;
  fputc(ch,temp);
 }

 fclose(fp);
 fclose(temp);

 remove(fname);
 rename("temp.txt",fname);

 printf("Encrypted.");
 return 0;
}
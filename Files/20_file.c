/******************************************************************************
Decrypt a scrambled (encrypted) file and make it readable again.
Input: File name: secret.txt (content: encrypted)
Output: File now contains: my password

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
  ch = ch - 3;
  fputc(ch,temp);
 }
 fclose(fp);
 fclose(temp);
 remove(fname);
 rename("temp.txt",fname);
 printf("Decrypted.");
 return 0;
}
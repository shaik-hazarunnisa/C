/******************************************************************************
Count both the number of words and the number of characters in a file.
Input: File name: info.txt (content: This is a test file.)
Output: Words: 5
Characters: 21

*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50]="info.txt";
 FILE *fp=fopen(fname,"w");
 fputs("This is a test file.",fp);
 fclose(fp);
 fp=fopen(fname,"r");
 char ch;
 int words=0,chars=0,inWord=0;
 while((ch=fgetc(fp))!=EOF){
  chars++;
  if(ch==' '||ch=='\n'||ch=='\t') inWord=0;
  else if(inWord==0){
   inWord=1;
   words++;
  }
 }
 fclose(fp);
 printf("Words: %d\nCharacters: %d",words,chars);
 return 0;
}
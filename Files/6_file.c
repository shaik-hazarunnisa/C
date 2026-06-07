/******************************************************************************

Copy everything from one file and save it into another file.
Input: Source file: lines.txt
Destination file: copy.txt
Output: File 'lines.txt' copied to 'copy.txt'.

*******************************************************************************/
#include <stdio.h>

int main(){
 char src[50],dest[50],ch;
 printf("Enter source file: ");
 scanf("%s",src);
 printf("Enter destination file: ");
 scanf("%s",dest);
 FILE *fs=fopen(src,"r");
 if(fs==NULL){
  printf("Source file not found");
  return 1;
 }
 FILE *fd=fopen(dest,"w");
 while((ch=fgetc(fs))!=EOF){
  fputc(ch,fd);
 }
 fclose(fs);
 fclose(fd);
 printf("File '%s' copied to '%s'.",src,dest);
 return 0;
}

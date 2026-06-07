/******************************************************************************
List all the files found inside a directory (folder).
Input: Directory: myfolder/
Output: file1.txt, file2.txt, notes.doc

*******************************************************************************/
#include <stdio.h>
#include <dirent.h>
int main(){
 char dname[100];
 printf("Enter directory: ");
 scanf("%s",dname);
 DIR *d=opendir(dname);
 if(d==NULL){
  printf("Directory not found");
  return 1;
 }
 struct dirent *f;
 while((f=readdir(d))!=NULL){
  if(f->d_type==DT_REG)
   printf("%s\n",f->d_name);
 }
 closedir(d);
 return 0;
}
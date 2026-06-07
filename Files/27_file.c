/******************************************************************************
Show the last modification date and time of a file.
Input: File name: a.txt
Output: Last modified: Sat Nov 26 17:32:15 2022

*******************************************************************************/
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(){
 char fname[100];
 struct stat info;

 printf("Enter file name: ");
 scanf("%s",fname);

 if(stat(fname,&info)!=0){
  printf("File not found");
  return 1;
 }

 printf("Last modified: %s",ctime(&info.st_mtime));
 return 0;
}

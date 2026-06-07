/******************************************************************************
Find the common folder path among a group of file paths.
Input: /home/user/docs/a.txt, /home/user/docs/b.txt, /home/user/docs/old/c.txt
Output: /home/user/docs

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(){
 char paths[10][300];
 int n=3;
 strcpy(paths[0],"/home/user/docs/a.txt");
 strcpy(paths[1],"/home/user/docs/b.txt");
 strcpy(paths[2],"/home/user/docs/old/c.txt");
 char common[300];
 int i,j;
 strcpy(common,paths[0]);
 for(i=1;i<n;i++){
  j=0;
  while(common[j] && paths[i][j] && common[j]==paths[i][j]) j++;
  common[j]='\0';
 }
 for(i=strlen(common)-1;i>=0;i--){
  if(common[i]=='/'){ common[i]='\0'; break; }
 }
 printf("%s",common);
 return 0;
}
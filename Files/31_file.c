/******************************************************************************
Add up numbers given as command line arguments and write the answer into a file.
Input: Arguments: 3 4 5, Output file: sum.txt
Output: sum.txt contains: 12

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
 int i,sum=0;
 char fname[50]="sum.txt";
 FILE *fp;
 for(i=1;i<argc;i++) sum+=atoi(argv[i]);
 fp=fopen(fname,"w");
 fprintf(fp,"%d",sum);
 fclose(fp);
 return 0;
}
/******************************************************************************

Delete a file from the computer.
Input: File name: temp.txt
Output: File 'temp.txt' deleted.

*******************************************************************************/
#include <stdio.h>

int main(){
 char fname[50];
 printf("Enter file name: ");
 scanf("%s",fname);
 if(remove(fname)==0) printf("File '%s' deleted.",fname);
 else printf("Error deleting file");
 return 0;
}
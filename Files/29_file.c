/******************************************************************************
Store employee details in a file and update them as needed.
Input: Add new employee: Name: John, Age: 25
Output: Employee added (info saved in file)

*******************************************************************************/
#include <stdio.h>

int main(){
 char name[50];
 int age;
 FILE *fp=fopen("employees.txt","a");
 if(fp==NULL){
  printf("Error opening file");
  return 1;
 }
 printf("Enter name: ");
 scanf("%s",name);
 printf("Enter age: ");
 scanf("%d",&age);
 fprintf(fp,"%s %d\n",name,age);
 fclose(fp);
 printf("Employee added");
 return 0;
}
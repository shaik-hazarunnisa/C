/*******************************
11. Program: Count total number of words in a string
          Input: "C programming is fun"

          Output: 4



***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main()
{
    char str[100];   
    int i=0,j,l1,cnt=0;
    char*p;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l1=strlen(str);
    p=strtok(str," ");
    while(p!=NULL)
    {
        cnt++;
        p=strtok(NULL," ");
    }
  printf("%d",cnt);
}
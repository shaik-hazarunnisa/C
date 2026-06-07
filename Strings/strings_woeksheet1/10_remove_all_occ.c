/*******************************
10. Program: Remove all occurrence of a word in given string
           Input: "hello world hello universe", remove: "hello"

          Output: "world universe"

***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main()
{
    char str[100];   
    char substr[50],*p;
    int i=0,j,l1,l2,pos;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l1=strlen(str);
    printf("Enter the substr to be removed:");
    scanf("%s",substr);
    l2=strlen(substr);
    p=str;
    while((p!=NULL))
    {
        memmove(p,p+l2+1,strlen(p+l2)+1);
        p=strstr(p,substr);
    }
  printf("%s",str);
}
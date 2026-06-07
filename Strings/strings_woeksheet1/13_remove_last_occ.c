/*******************************
13. Program: Remove last occurrence of a character from string
          Input: "mississippi", remove 's'

          Output: "missipippi"

***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<ctype.h>
int main()
{
    char str[100];   
    int i=0,cnt=0;
    char*p,ch;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    printf("enter the charr");
    scanf("%c",&ch);
    p=strrchr(str,ch);
    if(p!=NULL)
    {
        memmove(p,p+1,strlen(p));
    }
    else
    {
        printf("character not found");
    }
   
  printf("%s",str);
}
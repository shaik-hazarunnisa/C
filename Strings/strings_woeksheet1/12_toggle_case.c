/*******************************
12. Program: Toggle case of each character of a string
         Input: "HeLLo"

         Output: "hEllO"

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
    char*p;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    i=0;
   while(str[i]!='\0')
   {
       if(isupper(str[i]))
          str[i]=(str[i]+32);
        else
           str[i]=(str[i]-32);
           
        i++;
   }
  printf("%s",str);
}
/*******************************
Program: Find first occurrence of a character in a given string
       Input: "elephant", find 'e'

        Output: Position: 0
***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    char str[100],ch;   
    int i=0,pos;
    char *p;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    printf("Enter the char to be found:");
    __fpurge(stdin);
    scanf(" %c",&ch);
    p=strchr(str,ch);
    pos=(p-str);
    printf("position:%d",pos);
}
/*******************************
17. Program: Find last occurrence of a character in a string
        Input: "ababcabc", find 'b'

        Output: Position: 6

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
    p=strrchr(str,ch);
    pos=(p-str);
    printf("position:%d",pos);
}
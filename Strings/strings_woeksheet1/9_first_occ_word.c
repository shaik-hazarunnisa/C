/*******************************
9. Program: Find first occurrence of a word in a given string
         Input: "this is a test string", word: "test"
         Output: Found at position 11

***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main()
{
    char str[100];   
    char str2[50],*p;
    int i=0,j,l1,pos;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l1=strlen(str);
    printf("Enter the substr to be found:");
    scanf("%s",str2);
    p=strstr(str,str2);
    if(p!=NULL)
    {
        pos=p-str;
        printf("%d ",pos);
    }
    else
    {
        printf("string not found");
    }
}
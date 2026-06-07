/******************************************************************************
5. Program: Reverse a string without using library functions
         Input: "OpenAI"

         Output: "IAnepO"
****************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[100];   
    char ch;
    int i=0,j,l1;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l1=strlen(str);
    for(i=0,j=(l1-1);i<j;i++,j--)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    printf("%s",str);
}
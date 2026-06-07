/*******************************
7. Program: Replace all occurrences of a character with another in a string
         Input: "banana", replace 'a' with 'o'

         Output: "bonono"

***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main()
{
    char str[100];   
    char ch,rh;
    int i=0,j,l1,cnt=0,cnt1=0;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l1=strlen(str);
    printf("Enter the character:");
    scanf("%c",&ch);
    __fpurge(stdin);
    printf("Enter the replaced char:");
    scanf(" %c",&rh);
    for(i=0;i<l1;i++)
    {
        if(str[i]==ch)
        {
            str[i]=rh;
        }
    }
    printf("%s",str);
}
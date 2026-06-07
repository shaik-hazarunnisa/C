/*******************************
6. Program: Remove all extra blank spaces from a given string
         Input: " This is ChatGPT "

         Output: "This is ChatGPT"


***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[100];   
    char ch;
    int i=0,j,l1,cnt=0,cnt1=0;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l1=strlen(str);
    for(i=0;i<l1;i++)
    {
        if((i==0)&&(str[i]==32))
        {
            memmove(str,str+1,(l1-1)*sizeof(char));
            l1--;
        }
        else if((str[i]==32)&&(str[i+1]==32))
        {
            memmove(str+i+1,str+i+1+1,(l1-i-2)*sizeof(char));
            l1--;
        }
    }
    printf("%s",str);
}
/*******************************
18. Program: Trim both leading and trailing white space characters from given string
        Input: " Hello World "

        Output: "Hello World"

***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdio_ext.h>
int main()
{
    char str[100],ch;   
    int i=0,l;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l=strlen(str);
    i=0;
    while(str[i]!='\0')
    {
        if((i==0)&&(str[i]==32))
        {
            memmove(str,str+1,strlen(str));
            l--;
        }
        else if((str[i+1]=='\0')&&(str[i]==32))
        {
            memmove(str+i,str+i+1,strlen(str+1));
            l--;
        }
        i++;
    }
    str[l]='\0';
    printf("%s",str);
 
}

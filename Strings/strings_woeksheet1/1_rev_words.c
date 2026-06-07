/******************************************************************************

1. Program: Reverse order of words in a given string
          Input: "hello world from C"

         Output: "C from world hello"

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void rev(char *q,int size)
{
    int i,j;
    char ch;
    for(i=0,j=(size-1);i<j;i++,j--)
    {
        ch=q[i];
        q[i]=q[j];
        q[j]=ch;
    }
    printf("%s ",q);
    
}

int main()
{
    char str[100];   
    char *p,ch;
    int i=0,j,l1,l2;
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
    p=strtok(str," ");
    while(p!=NULL)
    {
        l2=strlen(p);
        rev(p,l2);
        p=strtok(NULL," ");
    }
   
}

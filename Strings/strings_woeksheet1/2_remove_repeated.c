/******************************************************************************
2. Program: Remove all repeated characters from a given string
         Input: "programming"

        Output: "progamin"

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[100];   
    char *p,ch;
    int i=0,j,l1,k=0;
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
        for(j=(i+1);j<l1;j++)
        {
            if(str[i]==str[j])
            {
                memmove(str+j,str+j+1,(l1-j-1)*sizeof(char));
               l1--;           }
        }
    }
    str[l1]='\0';
    printf("%s",str);
    
   
}
/******************************************************************************
Exercise 11: Accept Characters Until Enter Pressed
Goal:Dynamically grow a string buffer with realloc.
Activity:
    • Start with a small buffer.
    • Accept characters one by one.
    • Reallocate buffer each time a new character is added.
    • Stop on newline character.
    • Null-terminate and print the string.
    • Free the memory.



*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * getstring()
{
    int i=0;
    char *s=NULL;
    printf("Enter the string:");
    do
    {
        s=realloc(s,(i+1)*sizeof(char));
        s[i]=getchar();
       
    }while(s[i++]!='\n');
    s[i]='\0';
    return s;
}
int main()
{
    char *str=NULL;
    str=getstring();
    printf("%s",str);
}
   
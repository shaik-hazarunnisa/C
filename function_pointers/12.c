/*****************************************************************************
     12. Function Pointer Array for String Operations
        ◦ Implement several string manipulation functions (reverseString, toUpperCase, countVowels), each accepting a string argument.
        ◦ Store these functions in an array of function pointers.
        ◦ Prompt the user to choose an operation and apply it to their input string using the selected function pointer.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *s)
{
    int i=0,j=strlen(s)-1;
    while(i<j)
    {
        char t=s[i];
        s[i]=s[j];
        s[j]=t;
        i++;
        j--;
    }
    printf("%s\n",s);
}

void toUpperCase(char *s)
{
    int i;
    for(i=0;s[i];i++)
        s[i]=toupper(s[i]);
    printf("%s\n",s);
}

void countVowels(char *s)
{
    int i,c=0;
    for(i=0;s[i];i++)
    {
        char ch=tolower(s[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            c++;
    }
    printf("%d\n",c);
}

int main()
{
    char str[100];
    int ch;
    void (*f[3])(char*)={reverseString,toUpperCase,countVowels};

    scanf("%d",&ch);
    scanf(" %[^\n]",str);

    if(ch>=1&&ch<=3)
        f[ch-1](str);
    else
        printf("Invalid\n");

    return 0;
}
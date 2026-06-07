/*******************************
15. Program: Count occurrences of a word in a given string
          Input: "hi hello hi hey hi", word: "hi"

         Output: 3

***********************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char str[100],substr[50];   
    int i=0,cnt=0;
    char*p;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
   printf("Enter the substr ");
   scanf(" %s",substr);
    p=strstr(str,substr);
    while(p!=NULL)
    {
        cnt++;
        p=p+1;
        p=strstr(p,substr);
    }
  printf("%d",cnt);
}
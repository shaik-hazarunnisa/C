/*******************************
20. Program: Find all occurrences of a word in given string
        Input: "the sky is the limit in the sky", search "the"

       Output: Found at positions: 0, 15, 30
***********************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char str[100],substr[50];   
    int i=0,pos;
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
   printf("Found at positions");
    p=strstr(str,substr);
    while(p!=NULL)
    {
        pos=p-str;
        p=p+1;
        p=strstr(p,substr);
        printf("%d,",pos);
    }

}
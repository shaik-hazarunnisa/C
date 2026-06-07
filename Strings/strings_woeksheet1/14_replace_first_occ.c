/*******************************
Program: Replace first occurrence of a character with another in a string
         Input: "google", replace 'o' with 'a'

         Output: "gagole"

***********************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char str[100];   
    int i=0,cnt=0;
    char*p,ch,rh;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    printf("enter the charr");
    scanf("%c",&ch);
    printf("Enyer the replaced char");
    scanf(" %c",&rh);
    p=strchr(str,ch);
    p[0]=rh;
  printf("%s",str);
}
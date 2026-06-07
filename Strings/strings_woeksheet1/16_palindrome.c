/*******************************
16. Program: Check whether a string is palindrome or not
        Input: "madam"

       Output: "Palindrome"



***********************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    char str[100];   
    int i=0,l,j,cnt=0;
    
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l=strlen(str);
  for(i=0,j=(l-1);i<j;i++,j--)
  {
      if(str[i]!=str[j])
      cnt++;
  }
  if(cnt==0)
  {
      printf("Palindrome");
  }
  else
      printf("Not A Palindrome");
}
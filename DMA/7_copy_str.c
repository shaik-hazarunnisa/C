/******************************************************************************
Exercise 7: Dynamic String Input
Goal:Handle strings with dynamic memory allocation.
Activity:
    • Ask the user to enter a string.
    • Find its length using strlen.
    • Allocate memory to store the string using malloc.
    • Copy the string to the new memory.
    • Print the copied string.
    • Free the memory.


*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char str[20],*s;
  int len;
  printf("Enter a string:");
  scanf("%s",str);
  len=strlen(str);
  s=malloc((len+1)*sizeof(char));
   if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

  strcpy(s,str);
  printf("%s",s);
}
   